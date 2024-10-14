#include"rclcpp/rclcpp.hpp"
#include"turtlesim/msg/pose.hpp"
#include"geometry_msgs/msg/twist.hpp"
#include"std_msgs/msg/string.hpp"
#include"turtlesim/srv/spawn.hpp"
#include"turtlesim/action/rotate_absolute.hpp"
#include <cstring>
#include"rclcpp_action/rclcpp_action.hpp"
#define PI 3.1415926535897932
const double conx=5.544444561004639,cony=5.544444561004639;
using namespace std::chrono_literals;
using std::string;
using std::placeholders::_1;
using std::placeholders::_2;
double LMf = -PI/3,BYf=PI/3;
class Expand02 : public rclcpp::Node{
    public:
    Expand02(): Node("expand202_node"){ 
    RCLCPP_INFO(this->get_logger(),"!!节点创建成功!!");
    RCLCPP_INFO(this->get_logger(),"===！废话少说，让我们马戏团顶级黑奴魔法师 [鳖三] 为我们徒手画一个六芒星魔法阵！===");
    client_=this->create_client<turtlesim::srv::Spawn>("/spawn");
    puba_=this->create_publisher<geometry_msgs::msg::Twist>("/LM/cmd_vel",10);
    pubb_=this->create_publisher<geometry_msgs::msg::Twist>("/BY/cmd_vel",10);
    zhuanxiang1 = rclcpp_action::create_client<turtlesim::action::RotateAbsolute>(this,"LM/rotate_absolute");
    zhuanxiang2 = rclcpp_action::create_client<turtlesim::action::RotateAbsolute>(this,"BY/rotate_absolute");

    }
    void do_work(){
        // RCLCPP_INFO(this->get_logger(),"！！！！！【 施 工 中】 ！！！！！ ");
          rclcpp::Rate rat(50.00);
          rclcpp::Rate slee(5s);
          slee.sleep();
          slee.sleep();
        while(rclcpp::ok()){      
          for(int i=1;i<=75;i++){
              geometry_msgs::msg::Twist twi;
              twi.linear.x =3;
              puba_->publish(twi);
              pubb_->publish(twi);

            rat.sleep();
          }
          RCLCPP_INFO(this->get_logger(),"~~~< 此处转向 >~~~");
          this->send_goal();
          slee.sleep();
        //   return ; 
        }
        RCLCPP_INFO(this->get_logger()," ---您已终止了该项进程--- ");
    }
     bool connect_s(){
        while(!client_->wait_for_service(5s)){
            if(!rclcpp::ok()){
                RCLCPP_ERROR(rclcpp::get_logger("rclcpp"),"---节点已被强制退出---");
                return false;
            }
            RCLCPP_INFO(this->get_logger()," ……正在尝试连接服务端…… ");
        }
    return true;
    }
    rclcpp::Client<turtlesim::srv::Spawn>::FutureAndRequestId CreateTurtle(int fla,string nam)
    {
      RCLCPP_INFO(this->get_logger()," --先表演个 [大变活龟] -- ");
      auto reque1 = std::make_shared<turtlesim::srv::Spawn::Request>();
      reque1->name=nam;
      reque1->theta=PI/3*fla;
      reque1->x=conx+2;
      reque1->y=cony-3*fla+0.09;
      return client_->async_send_request(reque1);
    }    
    void send_goal(){//转向action
        RCLCPP_INFO(this->get_logger()," --[转向命令]-- ");
        if(!zhuanxiang1->wait_for_action_server(10s)&&!zhuanxiang2->wait_for_action_server(10s)){
            RCLCPP_ERROR(this->get_logger()," 服务连接超时，请换个时间再尝试 ");
           return;
        }
        turtlesim::action::RotateAbsolute::Goal goal;
        goal.theta=LMf-PI/3 ;
        LMf-=PI/3;
        rclcpp_action::Client<turtlesim::action::RotateAbsolute>::SendGoalOptions option;
        option.goal_response_callback = std::bind(&Expand02::goal_respone,this,_1);
        option.feedback_callback = std::bind(&Expand02::feedback_cb,this,_1,_2) ;
        option.result_callback = std::bind(&Expand02::result_cb,this,_1);
        zhuanxiang1->async_send_goal(goal,option);    
        RCLCPP_INFO(this->get_logger()," LM已转向 ");
        goal.theta=BYf+PI/3;
        BYf+=PI/3;
        zhuanxiang2->async_send_goal(goal,option);
        RCLCPP_INFO(this->get_logger()," BY已转向 ");
    }
    private:
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr puba_;//出生点在上方/LM
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pubb_;//出生点在下方/BY
    rclcpp::Client<turtlesim::srv::Spawn>::SharedPtr client_;  //生成新的乌龟
    rclcpp_action::Client<turtlesim::action::RotateAbsolute>::SharedPtr zhuanxiang1;//转向 60度 LM
    rclcpp_action::Client<turtlesim::action::RotateAbsolute>::SharedPtr zhuanxiang2;//转向 60度 BY
    //-------------------------------------------------------
    //------------------------------------------------------- action
    void goal_respone(std::shared_ptr<rclcpp_action::ClientGoalHandle<turtlesim::action::RotateAbsolute>> goal_handle){
            if(!goal_handle){
                RCLCPP_ERROR(this->get_logger()," 服务端拒绝了请求，请求数据非法 ");
            }
        else RCLCPP_INFO(this->get_logger(),"***<目标值已被接受,正在处理请求>***");
    }
    void feedback_cb(std::shared_ptr<rclcpp_action::ClientGoalHandle<turtlesim::action::RotateAbsolute>> goal_handle,std::shared_ptr<const turtlesim::action::RotateAbsolute::Feedback> feed){
        (void) goal_handle;
        RCLCPP_INFO(this->get_logger()," 连续反馈 ---  %.4f  ---- ",feed->remaining);
    }
    void result_cb(const rclcpp_action::ClientGoalHandle<turtlesim::action::RotateAbsolute>::WrappedResult &resu){
            if ( resu.code == rclcpp_action::ResultCode::SUCCEEDED)
                RCLCPP_INFO(this->get_logger()," ***已成功响应***\n **！！『乌龟的最终 delta = %.4f 』！！**",resu.result->delta);
            else 
                RCLCPP_ERROR(this->get_logger()," !!! 抱歉，你的响应失败 !!!");
    }

};
int main(int argc,char const *argv[]){
    rclcpp::init(argc,argv);
    auto SixStar=std::make_shared<Expand02>();
    bool flag= SixStar->connect_s();
    if(!flag){
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp")," ～～～服务连接失败～～～");
      rclcpp::shutdown();
      return 1;
    }
    auto fut1=SixStar->CreateTurtle(-1,"LM");
    auto fut2=SixStar->CreateTurtle(1,"BY");
    SixStar->do_work();
    rclcpp::shutdown();   
    return 0;
}