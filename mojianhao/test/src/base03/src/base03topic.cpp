#include "rclcpp/rclcpp.hpp"
#include "visualization_msgs/msg/marker.hpp"

using namespace std::chrono_literals;

class MarkerPublisher : public rclcpp::Node
{
public:
  MarkerPublisher(): Node("marker_publisher"), count_(0)
  {
    RCLCPP_INFO(this->get_logger()," 节点创建成功 ");
    publisher_ = this->create_publisher<visualization_msgs::msg::Marker>("marker", 10);
    timer_ = this->create_wall_timer(500ms, std::bind(&MarkerPublisher::timer_callback, this));
  }

private:
  void timer_callback()
  {
    auto message = visualization_msgs::msg::Marker();
    message.header.frame_id = "map";
    message.header.stamp = this->now();
    message.id = 0;
    message.type = visualization_msgs::msg::Marker::CUBE;
    message.action = visualization_msgs::msg::Marker::ADD;
    message.pose.position.x = 0.0;
    message.pose.position.y = 0.0;
    message.pose.position.z = 0.0;
    message.pose.orientation.x = 0.0;
    message.pose.orientation.y = 0.0;
    message.pose.orientation.z = 0.0;
    message.pose.orientation.w = 1.0;
    message.scale.x = 1.0;
    message.scale.y = 2.0;
    message.scale.z = 1.0;
    message.color.a = 1.0f; 
    message.color.r = 1.0f;
    message.color.g = 0.5f;
    message.color.b = 0.0f;

    publisher_->publish(message);
  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr publisher_;
  size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MarkerPublisher>());
  rclcpp::shutdown();
  return 0;
}