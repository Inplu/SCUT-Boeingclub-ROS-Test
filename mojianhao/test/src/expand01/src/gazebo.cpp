#include"rclcpp/rclcpp.hpp"
#include"std_msgs/msg/string.hpp"
#include"turtlesim/msg/pose.hpp"
#include"boeingtest_msg/msg/gezabo.hpp"
using std::placeholders::_1;
float geo=0,o_x=-1,o_y=-1,dex,dey;
class Gazebo : public rclcpp::Node{
    public:
    Gazebo(): Node("gazebo_node"){ 
    RCLCPP_INFO(this->get_logger(),"!!gazebo节点创建成功!!");
    RCLCPP_INFO(this->get_logger(),"====开始计里程====");
    gaza = this-> create_subscription<turtlesim::msg::Pose>("/turtle1/pose",10,std::bind(&Gazebo::pose_sb,this,_1));
    GGB=this->create_publisher<boeingtest_msg::msg::Gezabo>("gazebo",10);
}
    private:
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr gaza;
    rclcpp::Publisher<boeingtest_msg::msg::Gezabo>::SharedPtr GGB;
    float xx,yy;
    boeingtest_msg::msg::Gezabo lsp;
    void pose_sb(const turtlesim::msg::Pose::SharedPtr  po){//接收实时位置
            xx=po->x;
            yy=po->y;
            if(o_x==-1&&o_y==-1){
                RCLCPP_INFO(this->get_logger()," !!!初始化成功!!! ");
            }
            else{
                dex=o_x-xx;
                dey=o_y-yy;
                geo+=std::sqrt(dex*dex+dey*dey);
            }
            o_x=xx;
            o_y=yy;
            lsp.meter = geo;
           // RCLCPP_INFO(this->get_logger()," 总里程： %.4f ", geo);
            GGB->publish(lsp);
        }
};
int main(int argc,char const *argv[]){
    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<Gazebo>());
    rclcpp::shutdown();   
    return 0;
}