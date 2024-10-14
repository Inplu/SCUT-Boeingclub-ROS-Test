#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "tf2/LinearMath/Quaternion.h"
#include <memory>

using namespace std::chrono_literals;

class PDControllerNode : public rclcpp::Node {
public:
    PDControllerNode()
    : Node("pd_controller_node") {
        this->declare_parameter("kp", 0.8); // Proportional gain
        this->declare_parameter("kd", 0.1); // Derivative gain

        this->kp_ = this->get_parameter("kp").as_double();
        this->kd_ = this->get_parameter("kd").as_double();

        this->pose_ = {0.0, 0.0, 0.0};
        this->prev_error_ = 0.0;
        this->cmd_vel_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);
        this->odom_subscriber_ = this->create_subscription<nav_msgs::msg::Odometry>("/odom", 10, std::bind(&PDControllerNode::odometry_callback, this, std::placeholders::_1));

        // Timer for control loop
        timer_ = this->create_wall_timer(100ms, std::bind(&PDControllerNode::control_loop, this));
    }

private:
    void odometry_callback(const nav_msgs::msg::Odometry::SharedPtr msg) {
        // Extract position and orientation from the message
        this->pose_["x"] = msg->pose.pose.position.x;
        this->pose_["y"] = msg->pose.pose.position.y;

        double roll, pitch, yaw;
        tf2::Quaternion q;
        q.setX(msg->pose.pose.orientation.x);
        q.setY(msg->pose.pose.orientation.y);
        q.setZ(msg->pose.pose.orientation.z);
        q.setW(msg->pose.pose.orientation.w);
        tf2::Matrix3x3(q).getRPY(roll, pitch, yaw);
        this->pose_["yaw"] = yaw;
    }

    void control_loop() {
        // Calculate error and derivative
        double error = calculate_error(); // Implement this function
        double derivative = (error - prev_error_) / 0.1; // Assuming 10Hz rate

        // PD control
        geometry_msgs::msg::Twist cmd_vel;
        cmd_vel.linear.x = kp_ * error + kd_ * derivative;
        cmd_vel.angular.z = 0.0; // Implement if needed

        cmd_vel_publisher_->publish(cmd_vel);
        prev_error_ = error;
    }

    double calculate_error() {
        // Implement your error calculation here
        // For example, to calculate the distance from origin
        return std::sqrt(pose_["x"] * pose_["x"] + pose_["y"] * pose_["y"]);
    }

    double kp_, kd_;
    double prev_error_;
    std::map<std::string, double> pose_;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_publisher_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_subscriber_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PDControllerNode>());
    rclcpp::shutdown();
    return 0;
}