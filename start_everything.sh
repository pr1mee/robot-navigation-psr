#!/bin/bash
source /opt/ros/humble/setup.bash
source ~/ros2_ws/install/setup.bash

export ROS_DOMAIN_ID=0
export ROS_LOCALHOST_ONLY=1
export ROBOT_ENV=map1
export ROBOT_NAME=robile_gazebo
# Set environment variables

# Navigate to the ROS 2 workspace
cd ~/ros2_ws

# Build the specified package
colcon build --packages-select robile_navigation

# Source the workspace setup
source install/setup.bash

# Launch Gazebo with 4-wheel robot
gnome-terminal --tab --title="Gazebo" -- bash -c "ros2 launch robile_gazebo gazebo_4_wheel.launch.py; exec bash" 

sleep 5
# Run teleop_twist_keyboard
gnome-terminal --tab --title="Teleop" -- bash -c "ros2 run teleop_twist_keyboard teleop_twist_keyboard; exec bash" 
sleep 5

gnome-terminal --tab --title="Map-Server" -- bash -c "ros2 launch robile_navigation robile_nav2_bringup.launch.py; exec bash"
sleep 5

# Launch localization
gnome-terminal --tab --title="Localization" -- bash -c "ros2 launch robile_navigation localization.launch.py; exec bash"
sleep 5
# Launch navigation
gnome-terminal --tab --title="Navigation" -- bash -c "ros2 launch robile_navigation robile_nav2_bringup.launch.py; exec bash" 

# Allow time for navigation to start before launching localization

# Keep the script running
wait
