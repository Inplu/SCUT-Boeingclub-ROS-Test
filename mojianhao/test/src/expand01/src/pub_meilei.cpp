#include"rclcpp_action/rclcpp_action.hpp"
#include"rclcpp/rclcpp.hpp"
#include"boeingtest_msg/action/meilei.hpp"
using std::placeholders::_1;
using std::placeholders::_2;
using namespace std::chrono_literals;
using boeingtest_msg::action::Meilei;
int a;
float b,c,d;
bool shout_exit=false;
class Pub_Mel : public rclcpp::Node{
    public:
    Pub_Mel(): Node("pub_mei_node"){ 
    RCLCPP_INFO(this->get_logger(),"!!客户节点创建成功!!");
    cli_=rclcpp_action::create_client<Meilei>(this,"mingling");
}
    void send_goal(int choice,float x, float y,float ang){
        if(!cli_->wait_for_action_server(30s)){
            RCLCPP_ERROR(this->get_logger()," 服务连接超时，请换个时间再尝试 ");
            return;
        }
        Meilei::Goal goal;
        goal.choice=choice;
        goal.x=x;
        goal.y=y;
        goal.ang=ang;
        rclcpp_action::Client<Meilei>::SendGoalOptions option;
        option.goal_response_callback = std::bind(&Pub_Mel::goal_respone,this,_1);
        option.feedback_callback = std::bind(&Pub_Mel::feedback_cb,this,_1,_2) ;
        option.result_callback = std::bind(&Pub_Mel::result_cb,this,_1);
        cli_->async_send_goal(goal,option);
    }

    private:
    rclcpp_action::Client<Meilei>::SharedPtr cli_;

    void goal_respone(std::shared_ptr<rclcpp_action::ClientGoalHandle<Meilei>> goal_handle){
            if(!goal_handle){
                RCLCPP_ERROR(this->get_logger()," 服务端拒绝了请求，请求数据非法 ");
            }
        else  RCLCPP_INFO(this->get_logger(),"***<目标值已被接受,正在处理请求>***");
    }
    void feedback_cb(std::shared_ptr<rclcpp_action::ClientGoalHandle<Meilei>> goal_handle,std::shared_ptr<const Meilei::Feedback> feed){
        (void) goal_handle;
        if(a == 1 ||a==2||a==7)
        RCLCPP_INFO(this->get_logger()," 剩余距离为  ---  %.4f  ---- ",feed->distance);
        // RCLCPP_INFO(this->get_logger()," 实际位置  ---x=  %.4f ,y= %.4f---- ",feed->factx,feed->facty);
        else if(a == 3)
        RCLCPP_INFO(this->get_logger()," 已经用时：%.4f s",feed->distance);
        else if(a == 4)
        RCLCPP_INFO(this->get_logger()," 乌龟当前朝向：%.4f ",feed->distance);

    }
    void result_cb(const rclcpp_action::ClientGoalHandle<Meilei>::WrappedResult &resu){
            if ( resu.code == rclcpp_action::ResultCode::SUCCEEDED){
                switch (a)
                {
                case 1:{
                    RCLCPP_INFO(this->get_logger()," ***已成功响应***\n **！！『乌龟的最终位姿:x = %.2f   y = %.2f  』！！**",resu.result->turtle_x,resu.result->turtle_y);
                    break;}
                case 7:{
                    RCLCPP_INFO(this->get_logger()," ***已成功响应***\n **！！『乌龟的最终位姿:x = %.2f   y = %.2f  』！！**",resu.result->turtle_x,resu.result->turtle_y);
                    break;}
                case 3:{
                    RCLCPP_INFO(this->get_logger()," ***已成功响应***\n **！！『乌龟的最终位姿:x = %.2f   y = %.2f  』！！**",resu.result->turtle_x,resu.result->turtle_y);
                    break;}
                case 2:{
                    RCLCPP_INFO(this->get_logger()," ***已成功响应***\n **！！『乌龟的最终位姿:x = %.2f   y = %.2f  』！！**",resu.result->turtle_x,resu.result->turtle_y);
                    break;   
                }
                case 4:{
                    RCLCPP_INFO(this->get_logger()," ***已成功响应***\n **！！ 『乌龟的偏航为：%.4f  实际角度为 ： %.4f 』！！**",resu.result->turtle_x,resu.result->turtle_y);
                    break;
                }
                case 6:{
                    RCLCPP_INFO(this->get_logger()," ***已成功响应***\n **！！ 『乌龟迄今为止的总里程为 %.4f  , 龟爷也想加学分，龟爷也想进步进步』 ", resu.result->turtle_x);
                }
                default:
                    break;
                }
            }
            else 
                RCLCPP_ERROR(this->get_logger()," !!! 抱歉，你的响应失败 !!!");
        shout_exit=true;
    }
};
int main(int argc,char const *argv[]){
rclcpp::init(argc,argv);
RCLCPP_INFO(rclcpp::get_logger("fahaoshiling")," 我还弄不清单位，凭感觉输入 ");
rclcpp::Rate rat(5s);
while (rclcpp::ok()){
    a=0;b=0;c=0;d=0;
    RCLCPP_INFO(rclcpp::get_logger("fahaoshiling"),"+ ----------------------------------------------------------------------------------------------+");
    RCLCPP_INFO(rclcpp::get_logger("fahaoshiling"),"| SELECT: 1.向某点移动  2.画圆  3.直走 4.转向  5.画个波音的LOGO 6.查询总里程 7.回到原点 0.退出  |");
    RCLCPP_INFO(rclcpp::get_logger("fahaoshiling"),"| =====[WARN:你要是选择了，动保可能是会以强制要求动物表演涉嫌虐待动物的名义请你喝茶哟 ]=====    |");
    RCLCPP_INFO(rclcpp::get_logger("fahaoshiling"),"| 请输入你选择                                                                                  |");
    RCLCPP_INFO(rclcpp::get_logger("fahaoshiling"),"+ ----------------------------------------------------------------------------------------------+");

    scanf("%d",&a);
    switch (a)
    {
    case 0:{
        RCLCPP_INFO(rclcpp::get_logger("fahaoshiling")," 谢谢光临，期待下一次惠顾    (o . o)/~ ** ");
        rclcpp::shutdown();
        return 0;  
    }
    case 1:{
        RCLCPP_INFO(rclcpp::get_logger("fahaoshiling")," 请依次输入  |横坐标x| 、 |纵坐标y| 、 |误差上限(大于0.05)|");
        scanf("%f %f %f",&b,&c,&d);        
        if(d<=0.01){
                RCLCPP_INFO(rclcpp::get_logger("fahaoshiling")," 误差太小了，请恕臣妾做不到 ");
                break;
        }

        auto client__=std::make_shared<Pub_Mel>();
        shout_exit=false;
        client__->send_goal(a,b,c,d);
        while(!shout_exit&&rclcpp::ok())//优雅地回调
        {
            rclcpp::spin_some(client__);
        }
        break;}
    case 7:{
        RCLCPP_INFO(rclcpp::get_logger("fahaoshiling")," 正在传输返回的指令 ");
        auto client__=std::make_shared<Pub_Mel>();
        client__->send_goal(1, 5.544444561004639, 5.544444561004639,0.1);
        shout_exit=false;
        while(!shout_exit&&rclcpp::ok())//优雅地回调
        {
            rclcpp::spin_some(client__);
        }
        break;}
    case 2:{
        RCLCPP_INFO(rclcpp::get_logger("fahaoshiling")," 请依次输入  |线速度| 、 |角速度| 、 |旋转弧度|（0～2PI）");
        scanf("%f %f %f",&b,&c,&d);    
        if( d >6.283||d<0) {RCLCPP_INFO(rclcpp::get_logger("fahaoshiling")," 负数会导致需要更多的模拟部分角速度的正负问题（暂时想不到方便的优化），太混乱了所以不想写了 ");break;}    
        auto client__=std::make_shared<Pub_Mel>();
        client__->send_goal(a,b,c,d);
        shout_exit=false;
        while(!shout_exit&&rclcpp::ok())//优雅地回调
        {
            rclcpp::spin_some(client__);
        }
        break;}
    case 3:{
        RCLCPP_INFO(rclcpp::get_logger("fahaoshiling")," 请依次输入  |线速度| 、 |持续时间|(s)");
        scanf("%f %f",&b,&c);        
        auto client__=std::make_shared<Pub_Mel>();
        client__->send_goal(a,b,c,d);
        shout_exit=false;
        while(!shout_exit&&rclcpp::ok())//优雅地回调
        {
            rclcpp::spin_some(client__);
        }
        break;}
    case 4:{
        RCLCPP_INFO(rclcpp::get_logger("fahaoshiling")," 请依次输入  |旋转弧度|");
        scanf("%f",&b);           
        auto client__=std::make_shared<Pub_Mel>();
        client__->send_goal(a,b,c,d);
                shout_exit=false;
        while(!shout_exit&&rclcpp::ok())//优雅地回调
        {
            rclcpp::spin_some(client__);
        }
        break;}
    case 5:{
        RCLCPP_INFO(rclcpp::get_logger("fahaoshiling")," 你觉得可能吗？ 这样虐待，牛马真告上动保了");
       break;}
    case 6:{
        RCLCPP_INFO(rclcpp::get_logger("fahaoshiling")," ～～～～～～～～查询中～～～～～～～～");
        auto client__=std::make_shared<Pub_Mel>();
        client__->send_goal(a,b,c,d);
        shout_exit=false;
        while(!shout_exit&&rclcpp::ok())//优雅地回调
        {
            rclcpp::spin_some(client__);
        }
        RCLCPP_INFO(rclcpp::get_logger("fahaoshiling")," ～～～～～～～E~N~D～～～～～～～");
        break;}
    default:    {RCLCPP_INFO(rclcpp::get_logger("fahaoshiling")," 你在输啥呢？！重来！！ ");
        break;}
    }
    
    rat.sleep();
    RCLCPP_INFO(rclcpp::get_logger("fahaoshiling")," ================================================");
    }
rclcpp::shutdown();   
return 0;
}