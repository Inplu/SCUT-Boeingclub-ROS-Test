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
"""
    需求：加载urdf文件并在rviz2中显示机器人模型
    核心： 
        1.启动robot_state_publisher节点，该节点要以参数的方式加载urdf文件内容
        2.启动rviz2节点
    优化：
        1.添加 joint_state_publisher 节点(当机器人有非固定关节节点时，必包含该节点)
        2.设置rviz2的默认配置文件
        3.动态的传入urdf文件，把urdf文件封装为参数
"""

def generate_launch_description():
        # 1.启动robot_state_publisher节点，该节点要以参数的方式加载urdf文件内容    
    #p_value= ParameterValue(Command(["xacro ",get_package_share_directory("cpp06_urdf")+"/urdf/urdf/demo01_helloworld.urdf"]))
    # 参数的方式优化
    model = DeclareLaunchArgument(name = "model",default_value=get_package_share_directory("base03")+"/urdf/urdf/base301_robot.urdf")
    p_value= ParameterValue(Command(["xacro ",LaunchConfiguration("model")]))

    robot_state_pub= Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[{"robot_description":p_value}], #传参即为urdf文件内容
    )
    #优化1
    joint_state= Node (
        package="joint_state_publisher",
        executable="joint_state_publisher"
    )

    # 2.启动rviz2节点
    rviz2 = Node (package="rviz2",executable="rviz2",
        arguments=["-d",get_package_share_directory("base03")+"/rviz/base03_robot.rviz"]
        )
    return LaunchDescription([model,robot_state_pub,joint_state,rviz2])