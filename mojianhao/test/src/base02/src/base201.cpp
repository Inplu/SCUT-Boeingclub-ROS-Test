#include"rclcpp/rclcpp.hpp"
#include"geometry_msgs/msg/twist.hpp"
#include"std_msgs/msg/string.hpp"
class Base201 : public rclcpp::Node{
    public:
      Base201(): Node("base201_node"){ 
      RCLCPP_INFO(this->get_logger(),"!!base201节点创建成功!!");
      pub_=this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel",10);
      go_circle();
}
  private:
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_;
  void go_circle(){
    RCLCPP_INFO(this->get_logger()," *****！ ||base201||现在开始 由我们杂戏团头等黑奴为大家画个圈圈！***** ");
    geometry_msgs::msg::Twist twi;
    twi.angular.z = 1.0;
    twi.linear.x =2.5;
    rclcpp::Rate rate(10);
    while(rclcpp::ok()){
        pub_->publish(twi);
        rate.sleep();
    }
    RCLCPP_ERROR(this->get_logger()," !!! 您发送了终止程序的请求，正在终止程序 !!! ");

  }
};
int main(int argc,char const *argv[]){
    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<Base201>());
    rclcpp::shutdown();   
    return 0;
}