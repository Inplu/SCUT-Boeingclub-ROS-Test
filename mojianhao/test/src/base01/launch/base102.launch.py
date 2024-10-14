from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    t1 = Node(
        package="turtlesim",
        executable="turtlesim_node",
        respawn= True
    )

    return LaunchDescription([t1])