from launch import LaunchDescription
from launch_ros.actions import Node
# 封装终端指令相关类--------------
# from launch.actions import ExecuteProcess
# from launch.substitutions import FindExecutable
# 参数声明与获取-----------------
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
# 文件包含相关-------------------
# from launch.actions import IncludeLaunchDescription
# from launch.launch_description_sources import PythonLaunchDescriptionSource
# 分组相关----------------------
# from launch_ros.actions import PushRosNamespace
# from launch.actions import GroupAction
# 事件相关----------------------
# from launch.event_handlers import OnProcessStart, OnProcessExit
# from launch.actions import ExecuteProcess, RegisterEventHandler,LogInfo
# 获取功能包下share目录路径-------
from ament_index_python.packages import get_package_share_directory
from launch_ros.parameter_descriptions import ParameterValue
from launch.substitutions import Command

def generate_launch_description():
        # 1.启动robot_state_publisher节点，该节点要以参数的方式加载urdf文件内容    
    #p_value= ParameterValue(Command(["xacro ",get_package_share_directory("cpp06_urdf")+"/urdf/urdf/demo01_helloworld.urdf"]))
    # 参数的方式优化
    base3 = Node(package="base03",executable="base03topic")


    robot_state_pub= Node(
        package="robot_state_publisher",
        executable="robot_state_publisher", #传参即为urdf文件内容
    )
    #优化1
    joint_state= Node (
        package="joint_state_publisher",
        executable="joint_state_publisher"
    )

    # 2.启动rviz2节点
    rviz2 = Node (package="rviz2",executable="rviz2",
        arguments=["-d",get_package_share_directory("base03")+"/rviz/base03_topic.rviz"]
        )
    return LaunchDescription([base3,robot_state_pub,joint_state,rviz2])