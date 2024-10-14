#include"rclcpp/rclcpp.hpp"
#include"rclcpp_action/rclcpp_action.hpp"
#include"std_msgs/msg/string.hpp"
#include"geometry_msgs/msg/twist.hpp"
#include"boeingtest_msg/msg/gezabo.hpp"
#include"boeingtest_msg/action/meilei.hpp"
#include"turtlesim/msg/pose.hpp"
#include"turtlesim/srv/teleport_absolute.hpp"
using std::placeholders::_1;
using std::placeholders::_2;
using boeingtest_msg::action::Meilei;
using namespace std::chrono_literals;
double meteee;

class Controller : public rclcpp::Node{
    public:
    Controller(): Node("controller_node"){ 
    RCLCPP_INFO(this->get_logger(),"!!controller节点创建成功!!");
    pub_con= this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel",10);//实现对乌龟的控制
    sub_=this->create_subscription<turtlesim::msg::Pose>("/turtle1/pose",10,std::bind(&Controller::pose_sb,this,_1));
    act_ser=rclcpp_action::create_server<Meilei>(this,"mingling",
    std::bind(&Controller::handle_goal,this,_1,_2),
    std::bind(&Controller::handle_cancel,this,_1),
    std::bind(&Controller::handle_accepted,this,_1));//发布命令
    gez_=this->create_subscription<boeingtest_msg::msg::Gezabo>("gazebo",10,std::bind(&Controller::liste,this,_1));
    qijibaihuai=this->create_client<turtlesim::srv::TeleportAbsolute>("/turtle1/teleport_absolute");
    }

    private:
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr pub_con;//用来发布命令
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr sub_;  //用来接收乌龟的实时位置
    rclcpp_action::Server<Meilei>::SharedPtr act_ser;
    rclcpp::Subscription<boeingtest_msg::msg::Gezabo>::SharedPtr gez_;  //用来接收里程
    rclcpp::Client<turtlesim::srv::TeleportAbsolute>::SharedPtr qijibaihuai;
    float xx,yy,the,the00;
    void liste(const boeingtest_msg::msg::Gezabo temp){
        meteee = temp.meter;
    }
    rclcpp::Client<turtlesim::srv::TeleportAbsolute>::FutureAndRequestId  qijibai(float theta){

        auto request = std::make_shared<turtlesim::srv::TeleportAbsolute::Request>();
        request->x=xx;
        request->y=yy;
        request->theta=theta;
        return qijibaihuai->async_send_request(request);
    }
    void pose_sb(const turtlesim::msg::Pose::SharedPtr  po){//接收实时位置
            xx=po->x;
            yy=po->y;
            the=po->theta;
        }
    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID & uuid, std::shared_ptr<const Meilei::Goal> goalres){
        (void) uuid;
        if(goalres->x<0||goalres->x>11.08||goalres->y<0||goalres->y>11.08){
            RCLCPP_ERROR(this->get_logger()," ！！！目标值已经超出了边框！！！ ");
            return rclcpp_action::GoalResponse::REJECT;
        }
        RCLCPP_INFO(this->get_logger()," 目标点合法 ");
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }
    rclcpp_action::CancelResponse handle_cancel(std::shared_ptr<rclcpp_action::ServerGoalHandle<Meilei>>  goal_can ){
        (void) goal_can;
        RCLCPP_INFO(this->get_logger()," ---!!您已取消了该任务!!-- ");
        return rclcpp_action::CancelResponse::ACCEPT;
    }
    void execu(std::shared_ptr<rclcpp_action::ServerGoalHandle<Meilei>> goal_handle){
        RCLCPP_INFO(this->get_logger()," !!主逻辑开始执行!! ");
        auto resul=std::make_shared<Meilei::Result>();//封装最终结果
        auto feedbak=std::make_shared<Meilei::Feedback>();//连续反馈
        geometry_msgs::msg::Twist twis;
        rclcpp::Rate rat(100.0);//50Hz
        rclcpp::Rate rate(5s);
        if(goal_handle->get_goal()->choice==1){
            the00=the;
            auto fu1=this->qijibai(0);
            rate.sleep();
            while(true){
                if(goal_handle->is_canceling()){
                        
                        RCLCPP_ERROR(this->get_logger()," --!!正在为您终止项目!!-- ");
                        goal_handle->canceled(resul );
                        return;
                }
                //解析目标点的坐标与乌龟的实时坐标
                float goal_x=goal_handle->get_goal()->x;
                float goal_y=goal_handle->get_goal()->y;
                //计算剩余距离
                RCLCPP_INFO(this->get_logger()," 当前位置是 ： （ %.2f ， %.2f ） ||  将要到达的位置是 ： （ %.2f ， %.2f ） ",xx,yy,goal_x,goal_y);
                float x0=goal_x-xx;
                float y0=goal_y-yy;
                float distance= std::sqrt(x0*x0+y0*y0);
                //根据剩余距离并发布
                feedbak->distance=distance;
                goal_handle->publish_feedback(feedbak);
                //根据距离计算速度指令并发布
                float scale =0.8;
                float linner_x = scale * x0;
                float linner_y = scale * y0;
                twis.linear.x=linner_x;
                twis.linear.y=linner_y;
                pub_con->publish(twis);
                //循环结束条件（有误差）
                if(distance<=goal_handle->get_goal()->ang){
                    RCLCPP_INFO(this->get_logger()," 您与目标的距离为 %.4f ,我将视为已到达 ", distance);
                    break ;
                }
                rat.sleep();
            }
            if(rclcpp::ok()){
                resul->turtle_x =xx;
                resul->turtle_y =yy;
                goal_handle->succeed(resul);
            }
            fu1 = this->qijibai(the00);
            rate.sleep();
        }
        else if(goal_handle->get_goal()->choice==6){
            RCLCPP_INFO(this->get_logger()," =========================== ");
            RCLCPP_INFO(this->get_logger()," 总里程为： %.4f",meteee);
            RCLCPP_INFO(this->get_logger()," =========================== ");
            if(rclcpp::ok()){
                resul->turtle_x =meteee;
                goal_handle->succeed(resul);
            }
        }
         else if(goal_handle->get_goal()->choice==2){
            the00 = the; //原角度
            while(true){
                if(goal_handle->is_canceling()){
                        
                        RCLCPP_ERROR(this->get_logger()," --!!正在为您终止项目!!-- ");
                        goal_handle->canceled(resul );
                        return;
                }
                //解析目标点的坐标与乌龟的实时坐标
                float goal_xian=goal_handle->get_goal()->x;//线速度
                float goal_jiao=goal_handle->get_goal()->y;//角速度
                //计算剩余距离
                //根据剩余距离并发布
                feedbak->distance=the;
                goal_handle->publish_feedback(feedbak);
                float linner_x = goal_xian;
                twis.linear.x=linner_x;
                twis.angular.z=goal_jiao;
                pub_con->publish(twis);
                if (the<the00) the+=2*3.14159;
                if((the-the00)<goal_handle->get_goal()->ang){
                    RCLCPP_INFO(this->get_logger()," 你的偏航角度为 ： %.4f ,将视你已完成",the-the00);
                    break ;
                }
                rat.sleep();
            }
            if(rclcpp::ok()){
                resul->turtle_x =xx;
                resul->turtle_y =yy;
                goal_handle->succeed(resul);
            }
        }
        else if(goal_handle->get_goal()->choice==3){
            for(int i=1;i<=100*goal_handle->get_goal()->y;i++){
                if(goal_handle->is_canceling()){
                        
                        RCLCPP_ERROR(this->get_logger()," --!!正在为您终止项目!!-- ");
                        goal_handle->canceled(resul );
                        return;
                }
               
                RCLCPP_INFO(this->get_logger()," 当前位置是 ： （ %.2f ， %.2f ）  ",xx,yy);
                float timmmmmm = i/100;
                feedbak->distance = timmmmmm;
                goal_handle->publish_feedback(feedbak);
                twis.linear.x=goal_handle->get_goal()->x;
                pub_con->publish(twis);
                rat.sleep();
            }
            if(rclcpp::ok()){
                resul->turtle_x =xx;
                resul->turtle_y =yy;
                goal_handle->succeed(resul);
            }
        }
                 else if(goal_handle->get_goal()->choice==4){
            the00 = the; //原角度
            float wantthe=the00+goal_handle->get_goal()->x;
            if(wantthe<0) wantthe+=2*3.14159;
            if(wantthe>2*3.14159) wantthe-=2*3.14159;
            RCLCPP_INFO(this->get_logger()," 目标的角度为 %.4f ",wantthe);
            if(wantthe>1)
            while(true){
                if(goal_handle->is_canceling()){
                        
                        RCLCPP_ERROR(this->get_logger()," --!!正在为您终止项目!!-- ");
                        goal_handle->canceled(resul );
                        return;
                }

                if (the< 0) the+=2*3.14159;
                feedbak->distance=the-the00;
                goal_handle->publish_feedback(feedbak);

                twis.angular.z=(wantthe-the)*0.6;
                pub_con->publish(twis);
                if(the<wantthe+0.005&&the>wantthe-0.005){
                    RCLCPP_INFO(this->get_logger()," 你的偏航角度为 ： %.4f ,将视你已完成",the-the00);
                    break ;
                }
                rat.sleep();
            }
            if(rclcpp::ok()){
                resul->turtle_x =the-the00;
                resul->turtle_y =the;
                goal_handle->succeed(resul);
            }
        }
    }
    void handle_accepted(std::shared_ptr<rclcpp_action::ServerGoalHandle<Meilei>> goal_han){
        std::thread(std::bind(&Controller::execu,this,goal_han)).detach();//启动子线程
    }

};
int main(int argc,char const *argv[]){
    rclcpp::init(argc,argv);
    rclcpp::spin(std::make_shared<Controller>());
    rclcpp::shutdown();   
    return 0;
}
