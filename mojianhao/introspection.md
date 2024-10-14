# Inplu（莫健豪）的波音俱乐部考核--技术总结   
---

本文档是为完成波音俱乐部考核所需要的技术而编写  

编写时间 10月13日  

[TOC]

## 第零部分 ~~前言~~ 说废话  
---
  由于本人在初中高中学了4年多的竞赛，所以对于编程方面也算得上是有点理解。但由于高二退赛了，再加上竞赛几乎不讲类，也基本是用不上指针，一点也没体验到c++的面向对象性，**最重要的是当时根本不用担心配置问题，一个DEV从入门用到入坟**（~~有好几天都在研究配置问题，当时总是构建失败向群里求助了学长也没能解答，最终舍弃了那个功能包~~），导致我自信地开始了我的ros2学习之旅，然后一个接一个地栽坑里去，最后还是老老实实地补了一下指针和类的知识。  

  但总的来说，ros2的内容挺好理解的（~~至少都比较形象，不像数论那样抽象~~）虽然在*通信机制*上花了不少时间，但过了这里就感觉已经明白了ros2的一些逻辑了（~~也有可能是我想多了~~）而且有段时间我自学了一会HTML，对于标签型代码也比较熟悉，urdf感觉确实很方便，至少比直接topic通信好用。  

  这一个半月的ros2学习还是挺充实的，作为一个全新的领域，却又能让人感到十分的熟悉，挺好的，也希望我能继续学下去(~~但感觉我身边学ros的人好少,要么卷硬件，要么卷opencv，查资料时也有点麻烦（应该是自己的问题），但我倒是挺喜欢ros的~~)  

## 第一部分 内容简介  
---
  本文档主要就是这一个半月以来，初步踏入ros2大门的一些**心得、归纳与总结**。  

### 先感谢一波资源  
  我的ros2基本上是由@猛狮集训营 的视频引入门，十分感谢赵虚左老师通俗易懂的教学视频。至于古月居老师与小鱼老师的视频暂时还没看（~~有时间了再看看~~）  
[猛狮集训营的B站链接](https://space.bilibili.chttps://space.bilibili.com/1101432368/channel/seriesom/1101432368/channel/series)  
  这段时间里，基本上是围绕着这个turtlesim_node来学习的，确实开发者的这个案例十分成功，令人佩服，所以~~turtlesim可以是我的第二个ros2老师~~。  
  CSDN用的挺多的(主要就是一些小的配置问题去查查) ，AI用的主要是天工AI和CSDN的AI(~~别问问就是不会翻墙，用不上ChatGPT，当自律网民，Clash吃灰ing~~)。买了一本ros的书，基本没用上，草草看了一下讲的不太好。  

### 回到正题介绍全文  
  该文档主要分为***开发历程***、***成果展示***、***对题目的建议和思考***、**问题与总结***。  
**开发历程**：主要讲我的学习经历  
***成果展示***：会列出部分此次考核我觉得核心的代码  
***对题目的建议和思考***：会提出一些自己的见解  
***问题与总结***：反思，狠狠地反思。  

## 第二部分 开发历程  
---
### 初识  
  我忘记自己是多久开始ros的了，*应该是波音第一次宣讲当天我就开始了解ros*。真的，相较于基地的单片机车模和opencv这些，我更喜欢ros，具体原因不太清楚。(~~大概这就是一见钟情吧~~)  

  很多人大多都是先要学下载**ubuntu**，这一环节我没能体验到~~太可惜了~~。由于我高中有一段时间特别喜欢前端开发，自学网站、搭建之类的（~~但很快就开始高二下的复习，程度，只能是说入了门~~）。为了搞一个本地服务器，自己安装了ubuntu（~~当时啥也不懂，算上基本的配置搞了一个下午~~），自己学了点bash，打算好好学学PHP与MySQL，给它们搭建的平台，结果倒是成了ros的环境了。当时还是22.04,现在已经24.04。  

  然后开始惊心动魄的**ros2环境搭建**了，由于终端用得比较熟，也比较轻松。  

  第一次打开**turtlesim_node**节点时还是相当的震惊的，毕竟4年竞赛都没摸到过*可视化*的门槛，而ros2一来就是已成形的程序(~~但其实也不是好实现的~~)，给乡巴佬的我留下了不小震撼  

  然后在赵虚左老师的带领下，我完成了我的ros2的helloworld  
```
#include "rclcpp/rclcpp.hpp"
using namespace std;
//需求在终端输出文本hello world
/*
  流程：
    1.包含头文件
    2.初始化ros2客户端
    3.创建节点指针
    4.输出日志
    5.释放资源
*/
// 方式一：直接实例化node
/*int main(int argc, char ** argv)
{
   //  2.初始化ros2客户端
   rclcpp::init(argc,argv);
   //  3.创建节点指针
   auto node= rclcpp::Node ::make_shared("helloword_node_cpp");//创建node对象的指针hellow……_cpp
   //  4.输出日志
   RCLCPP_INFO(node->get_logger(),"hello world!");//输出的API ：RECLCPP_INFO
   //  5.释放资源
rclcpp::shutdown();
  return 0;
}*/
//方式二：继承类node
//自定义类继承 Node
class MyNode: public rclcpp::Node{
  public:
    MyNode():Node("hello_node_cpp"){
      RCLCPP_INFO(this->get_logger(),"hello world!FROM CLASS NODE!!!");
    }
};
int main(int argc,char const *argv[]){
  //初始化
  rclcpp::init(argc,argv);
  //实例自定义类
  auto node=std::make_shared<MyNode>();
  //…… 

  //资源释放
  rclcpp::shutdown();
}
```
```
"""需求在终端输出文本hello world
  流程：
    1.导包
    2.初始化ros2客户端
    3.创建节点
    4.输出日志
    5.释放资源
"""
#导包
import rclpy

##方式一：直接实例化
"""
def main():
    ##2.初始化ros2客户端
    rclpy.init()
    ##3.创建节点
    node= rclpy.create_node("helloworld_node_py")
    ##4.输出日志
    node.get_logger().info("hello world!(PY)")
    ##5.释放资源
    rclpy.shutdown()

if __name__ == '__main__':
    main()
"""
##方式二：类继承
from rclpy.node import Node
class MyNode(Node): ##MyNode 继承自Node
  def __init__(self):
    super().__init__("hello_world_py")
    self.get_logger().info("Hello World!FROM CLASS NODE PY!!") 


def main():
  ##初始化
  rclpy.init()
  #创建对象
  node=MyNode()
  #……
  ##资源释放
  rclpy.shutdown()
  pass
```
  初学我还是把python写了一遍，但确实python不太熟，有段时间配置搞的破大防了，就不写python的了，*专攻cpp*  
### 破防  
  不知道学长学姐是否记得大约一个月前有个同学把**满屏通红**的代码发在群里向学长学姐求助，没错那就是我。  
  当时我才开始学自定义接口的话题通信，上午学会了服务端的写法后就去吃饭了（顺便客户端开了一个头）。然后，下午继续写，发现vscode的报错一直没消，起初不以为意，以为只是误报只需改改vscode的配置文件就好了。但是当我开始编译时，终端开始报错时,我知道出大问题了，我反复检查了自己的程序、反复与视频里的程序对照，确定不是程序本身问题后，又去检查配置始终找不到问题所在。这时再看先前的服务端，发现服务端也报错，无法运行了，以前的文件也都无法编译。查了CSDN和AI始终找不问题，甚至不太会描述问题，走头无路向群里求助，也没用。AI说可能是*路径有中文*的缘故，我甚至把磁盘（分了一块区给代码）重新格式化再命名也不成。最终选择删包重写。当时的确很气馁，有两天看到ros就两眼一黑，于是先歇了几天，把基地的板子焊了，等到周末再改。历经了九九八十一难，在*删包、格式化磁盘、一切重新写一遍之后*，终于我的第一对自定义接口的**通信节点**诞生了。  
  话题通信——服务端  
```
#include <cstdio>
#include"rclcpp/rclcpp.hpp"
#include"std_msgs/msg/string.hpp"
#include "base_interfaces_demo/msg/student.hpp"
using base_interfaces_demo::msg::Student;
using namespace std::chrono_literals; //用来解释时间单位 如
//调用消息类型
class TALKER : public rclcpp::Node{
    public:
    //      1.创建发布方
    TALKER(): Node("talker_node"),ad(0){ //初始化计数器 
      publisher_=this->create_publisher<Student>("chatter_stu",10);  //create_publisher<消息类型>("话题名",1QOS); 
      RCLCPP_INFO(this->get_logger(),"创建了一个发布方，马上开始发布消息------------------");
           // 2.创建定时器
      timer_=this->create_wall_timer(1s,std::bind(&TALKER::ontimer,this));//create_wall_timer(时间间隔,std::bind(&类名::函数名,调用者))  回调函数
    }

    private:
      rclcpp::Publisher<Student>::SharedPtr publisher_; //定义一个指针接收函数
      rclcpp::TimerBase::SharedPtr timer_;//同上
      void ontimer(){
            //3.组织并发布学生信息
        auto stu=Student();//创建stu对象
        stu.name="huluwa" ;
        stu.age=ad;
        stu.height=1.20;   
        ad++;
        publisher_->publish(stu);//发布对象
        RCLCPP_INFO(this->get_logger(),"发布的消息：(%s ,%d ,%.2f)",stu.name.c_str(),stu.age,stu.height);//日志输出
      }
  int ad;//计数器
};
int main(int argc,char const *argv[]){
//1.包含头文件
rclcpp::init(argc,argv);
//调用spin函数，并传入节点对像指针
rclcpp::spin(std::make_shared<TALKER>());
//5.资源释放
rclcpp::shutdown();   
return 0;
}
```
  话题通信——客户端
```
#include"rclcpp/rclcpp.hpp"
#include"std_msgs/msg/string.hpp"
#include "base_interfaces_demo/msg/student.hpp"
using base_interfaces_demo::msg::Student;
class LISTENER : public rclcpp::Node{
    public:
    LISTENER(): Node("listener_node"){
        //创建订约方
        subscriprion_= this->create_subscription<Student>("chatter_stu",10,std::bind(&LISTENER::docb,this,std::placeholders::_1));
        //create_subscription<消息类型>("话题名",QOS,std::bind(回调函数,调用者,占位符用来声明有参数))
    }
    private:
        rclcpp::Subscription<Student>::SharedPtr subscriprion_;//接收指针
        void docb(const Student &stu){
            RCLCPP_INFO(this->get_logger(),"订阅到的学生信息：--name= %s , age = %d ,height = %.2f",stu.name.c_str(),stu.age,stu.height);
        }
};
int main(int argc,char const *argv[]){
//1.包含头文件
rclcpp::init(argc,argv);
//调用spin函数，并传入节点对像指针
rclcpp::spin(std::make_shared<LISTENER>());
//5.资源释放
rclcpp::shutdown();   
return 0;
}
```
  现在看来代码量真的少，但当时调完<u>成就感十足</u>(~~比当初在竞赛调算法的成就感高太多了~~)  
### 渐入佳境  
  而后的srv、action、param、分布式、重名、元功能包、时间API、launch、urdf就基本水到渠成了。  
  只是看到PID控制，困惑了好久，赵虚左老师的视频没有以此为标题的，又以“PD控制器”为关键词搜寻。一开始一直以为是类似于上面的一种接口，查了好多，封面都是与仿真环境相关的，感觉不是问题问的草草看了就画走。后来才指导PID是一种运用微积分的算法，由于通信是离散的，需要该算法精准调控（~~但还是有误差~~），然后就开始完成考核任务。  

## 成果展示  
---
  任务一基本可以理解是引导同学们接触ros2,基本只要安装了ros2就可以完成。  
  任务二就是话题通信的基本运用，但是需要懂点turtlesim_node下各自接口的作用。  
  画圆只需要*固定角速度与线速度*即可  
```
    twi.angular.z = 1.0;
    twi.linear.x =2.5;
```
  方形比较麻烦，但用for循环的方式加上sleep就可固定每条边时长，*速度一致，边则一致*(~~再加上一个dps常用小技巧~~)  
```
    int  a[5][5]={{1,0},{0,1},{-1,0},{0,-1}};
    while(rclcpp::ok()){
        twi.linear.x = a[temp][0];
        twi.linear.y = a[temp][1];
        for(int i=1;i<=150 && rclcpp::ok();i++){
                pub_->publish(twi);
                rate.sleep();
            }
        temp=(temp+1)%4;
        }
```
  *但是，作六芒星时我发现大抵是我用了逃课方法，原题的意思可能是想用角速度转向而我直接用x y的线速度完成*  
  至于拓展二的六芒星，我又想到一个逃课方法——<u>生成两个乌龟同时画正三角形</u>只要位置合适即可成为六芒星（~~主要是真一条边一条边地爬，角度有60度有120度，代码量不低~~）。  
```
    while(rclcpp::ok()&&die<=12){      
          for(int i=1;i<=90;i++){
              geometry_msgs::msg::Twist twi;
              twi.linear.x =3;
              puba_->publish(twi);
              pubb_->publish(twi);

            rat.sleep();
          }
          RCLCPP_INFO(this->get_logger(),"~~~< 此处转向 >~~~");
          this->send_goal();
          if(!rclcpp::ok()) return ;
          slee.sleep();
        //   return ; 
            die++;
        }
```
  *但在制作时，中间角度弄错了，把转向角当成了60度，就形成了正六边形*  

  任务三比较繁琐，因为*要填的内容太多*，才能确定一个简单图形，相较之下拓展三的urdf的标签形式就十分简洁明了(~~赵老师也只讲了urdf、yml、xml的形式，再回来看题时才发现可以通过通信方式创建模型~~)  
```
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
```
```
<robot name="BoeingTeseBase03">
    <material name="yellow">
        <color rgba="0.6 0.6 0.2 0.75"/>
    </material>
    <link name="base301">
        <visual> <!-- 用来描述link的外观 -->
            <!-- 形状-->
             <geometry>
                <box size="4.0 2.0 1.0"/>
                <!-- <sphere radius="1.0"/> -->
                <!-- <cylinder radius="1" length="6.0"/>  -->
                 <!-- <mesh filename="file_path" scale="1.0"/>  皮肤-->
             </geometry>
             <!-- 平移 旋转-->
             <origin xyz="1 1 2" rpy="0.5 0.5 0.5" /> <!-- 翻滚 俯仰 偏航  正值为逆时针旋转-->
             <!-- 材质-->
             <material name="yellow">
                <!-- <color rgba="0.6 0.6 0.2 0.75"/> -->
            </material>
        </visual>
        
    </link>    
</robot>
```

  最后的PD控制器花的时间最长。由于想要成为控制器，最关键的一点就是**交互**，然而赵老师讲的又没提到过程序运行中的交互，自己搜了一下AI，也基本只有argv的传参，除此之外就是极为复杂的*监听机制*，学了一会搞不太懂，于是放弃了。直接选择让c++处理，再以话题的形式发布指令给controller。  
  于是有了pun_meilei  
```
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
```
  考虑到题中强调了总里程，我专门设计了一个节点负责实时监控、处理位置关系，并发布里程。(~~我看到gezabo似乎是一个仿真环境的功能包，但我真不想知道我设计了这么久的程序其实偏题了，注意到时时间不多了。所以我选择性眼瞎~~)  
```
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
```
  最后就是最冗杂的controller处理来自pub_meilei的指令  
```
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
```
  至于launch文件，基本都是一个模样，就不贴代码了  

  而**四大通信机制**，话题、服务、动作都用到了，唯独参数没用上，***世人不患寡而患不均***，于是我添了一个参数服务——**背景色渐变**  
```
rclcpp::Rate rate(2.0);

        while(rclcpp::ok()){
        /*需求由浅变深，再由深变浅*/
            red=(red+1)%511;
            blue=(blue+5)%511;
            green=(green+3)%511;

            clie_->set_parameters({rclcpp::Parameter("background_r",std::abs(red-255)),rclcpp::Parameter("background_b",std::abs(blue-255)),rclcpp::Parameter("background_g",std::abs(green-255))});
```
  <u>**这下功德圆满了。**</u>  

  *程序多怎么办？*  
  ~~交给launch与bash就行了！~~  

## 对题目的思考和建议  
---
  ros2的题目基本上的确是*新手入门*的诱导题目。  
  *按照PDF给的序号来的*  

  任务一(安装ubuntu与用小海龟画2024)个人感觉有点多余，没必要专门列出。虽然学长学姐们的本意就是让同学们接触，然而要完成ros的初期学习，就一定避不开这两步，即既然决定要参与ros的考核这两步一定是要走的。
  所以个人认为，*单独作为题目没必要，可以纳入学习路径中去*。(~~但后面学长学姐的发言似乎也没把这个当作任务一~~)  

  任务二(画圆、正方形)与拓展二(画六芒星)，在本质上都是考核同学们对话题通信的运用。由于乌龟的控制为cmd_vel接口，为话题接口，下含了线速度与角速度。因此，在学会了话题通信的基本用法，并知晓了cmd_vel的用法基本可以完成。如果按照角速度转向的操作来，这道题可以推广到正n边形，因为外角和可知，转向角便可知，就可形成n边形。  
  所以我认为可以提升难度，把六芒星改到任务二中，扩展就为启动节点时传参argv，然后*根据参数决定要走的多边形*，这样作可以提升互动性，真正意义上的体现出话题的发布的变化。  

  任务三与拓展三都是对rviz的初识，个人感觉不错。只是直接从通信机制跳到了可视化，跳幅确实有点大，如果在之前布置坐标变换、广播器等的内容，跳幅应该就没那么大了。(~~但时间上讲，学完坐标变换在学urdf确实有点不够~~)  

  拓展一，让同学们接触到了最重要的算法之一PID挺不错，~~只是希望题目能更加一目了然，对于初学者而言，上来一个PD控制器、gazebo有点丈二和尚了~~  

  总的而言，题目本身是循序渐进的引导同学们入门的。(~~但可能有些同学是自认为学得差不多才看任务的~~)  

## 问题与总结(~~编不出来，该说的心得前文已经说了~~)  
---
### 问题  
  对于小白而言，最大的问题果然还是**配置问题**，毕竟看视频很难发现配置的错误，很多视频其实也不会专门地去讲ros2中*cmakelists.txt与packages.xml的组成与各自成分的意义*，而是直接说要在什么地方加什么，一旦自己来配置，很容易漏、错加配置。当时我便是栽在这个坑上，气馁了蛮久的。其实在培训中应该重点讲讲这个，弥补视频中的缺憾。  
  其次，就感觉题目有点跳跃，如果可以，希望在每个题目前加个标签，如<话题通信>  、<PID算法>之类的，方便学生们定向学习。PID的门路的确找了一会儿。  
  至于其他方面基本上成不了太大问题。  

### 总结
  这一个半月里学到的东西却是多，挺充实的。虽然其中有过挫折，但相较而言，与之对应的成就感也十分高。  
  其实如果沉下心来学习ros，从基础概念开始一步一步地走扎实，应该能避开很多的坑。  

  通过本次的学习，我算是领略到了c++与py的移植性多么强，以前的学习主要还是针对算法，ros的学习就偏向于实际运用，感觉与生活更进一步了。  
  此外，这次学习也是一个让我们更加了解计算机、程序运行的底层逻辑，对于通信而言底层逻辑就是节点与话题，PID控制而言，节点逻辑就是不断修正减少误差，urdf就是几个重要参数的填充。  

  当然作为机器人系统的开发，这才是万里长征第一步，之后的学习路程无疑是更加艰辛。  
  我也希望之后能愈走愈远，将ros的本领掌握后，设计出更有意思的项目。  

---
  再次感谢波音俱乐部的这次机会，让我进入了ros这个世界，也感谢B站的各位up主提供的资源。  
  [github地址](https://github.com/Inplu/SCUT-Boeingclub-ROS-Test.git)
