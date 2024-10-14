#include"rclcpp/rclcpp.hpp"
// #include"std_msgs/msg/string.hpp"
using namespace std::chrono_literals;
class Ex06Par : public rclcpp::Node{
    public:
    Ex06Par(): Node("exer06_param_node"){ 
    RCLCPP_INFO(this->get_logger(),"!!参数节点创建成功!!");
    clie_=std::make_shared<rclcpp::SyncParametersClient >(this,"/turtlesim");}
    bool connect_ser(){
        while(!clie_->wait_for_service(1s)){
            if(!rclcpp::ok()) {
                RCLCPP_ERROR(rclcpp::get_logger("rclcpp")," !!!您已终止程序!!!");
                return false;
            }
            RCLCPP_INFO(this->get_logger()," -服务端连接中- ");
        }

        return true;
    }
    void update_clo(){
        //背景色递进式修改
        // 0~255
        // 1.获取参数
        int red=clie_->get_parameter<int>("background_r");
        int blue=clie_->get_parameter<int>("background_b");
        int green=clie_->get_parameter<int>("background_g");

        //2.编写循环，修改参数 ，休眠修改频率
        rclcpp::Rate rate(2.0);

        while(rclcpp::ok()){
        /*需求由浅变深，再由深变浅*/
            red=(red+1)%511;
            blue=(blue+5)%511;
            green=(green+3)%511;

            clie_->set_parameters({rclcpp::Parameter("background_r",std::abs(red-255)),rclcpp::Parameter("background_b",std::abs(blue-255)),rclcpp::Parameter("background_g",std::abs(green-255))});

            rate.sleep();
        }

    }
    private:
    rclcpp::SyncParametersClient::SharedPtr clie_;
};
int main(int argc,char const *argv[]){
    rclcpp::init(argc,argv);
    // rclcpp::spin(std::make_shared<Ex06Par>());
    auto color_=std::make_shared<Ex06Par>();
    if(!color_->connect_ser()){
        RCLCPP_ERROR(rclcpp::get_logger("rclcpp"),"……正在已终止程序……");
        rclcpp::shutdown();  
        return 1;
    }
    //调用函数
    color_->update_clo();
    rclcpp::shutdown();   
    return 0;
}