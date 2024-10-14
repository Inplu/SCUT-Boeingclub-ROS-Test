from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess,RegisterEventHandler
from launch.event_handlers import OnProcessStart
#程序退出的事件

def generate_launch_description():
    #启动两个 turtlesim_node
    t1 = Node (package="turtlesim" ,executable="turtlesim_node")

    exer01 = Node (package="expand02" ,executable="expand201")
    registe_rotate_start=RegisterEventHandler(
        event_handler=OnProcessStart(
            target_action= t1,
            on_start= exer01
        )
    )
    backg = Node (package="base02",executable="base200")
    return LaunchDescription([t1,registe_rotate_start,backg])#返回节点值、操作列表 ，按顺序