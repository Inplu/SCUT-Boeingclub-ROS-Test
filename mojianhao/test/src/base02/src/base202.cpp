#include"rclcpp/rclcpp.hpp"
#include"std_msgs/msg/string.hpp"
#include"geometry_msgs/msg/twist.hpp"
int  a[5][5]={{1,0},{0,1},{-1,0},{0,-1}};
class Base202 : public rclcpp::Node{
    public:
    Base202(): Node("base202_node"){ 
    RCLCPP_INFO(this->get_logger()," *****！ ||base202||现在开始 由我们杂戏团头等黑奴为大家画个正方形！***** ");
    pub_=this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel",10);
    go_box();
    }
    private:
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_;
    void go_box(){
        int temp=1;
        rclcpp::Rate rate(50.00);
        geometry_msgs::msg::Twist twi;
        while(rclcpp::ok()){
            twi.linear.x = a[temp][0];
            twi.linear.y = a[temp][1];
            for(int i=1;i<=150 && rclcpp::ok();i++){

                pub_->publish(twi);
                rate.sleep();
            }
            temp=(temp+1)%4;
        }
    RCLCPP_ERROR(this->get_logger()," !!! 您发送了终止程序的请求，正在终止程序 !!! ");
    }
};
int main(int argc,char const *argv[]){
    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<Base202>());
    rclcpp::shutdown();   
    return 0;
}