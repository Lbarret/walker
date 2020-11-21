# Overview:

This is a ros project that drived the turtlebot around a map and avoids obsticles.

## Assumptions/dependencies

 -Ubuntu 18.04

 -ROS Melodic

 -This project assumes the user has a created a catkin workspace by following the 
following tutorial: 

http://wiki.ros.org/catkin/Tutorials/create_a_workspace

 -This project also assumses that you have turtlebot3_simulations installed:

- cd ~/catkin_ws/src

- git clone https://github.com/ROBOTIS-GIT/turtlebot3_simulations.git
 
## Build

To build this project, download this project into your catkin_ws/src file and build the catkin ws:

- cd ~/catkin_ws/src

- git clone https://github.com/Lbarret/walker.git

- cd ~/catkin_ws

- catkin_make

## Running

To run this project, run the launch file:

- roslaunch walker walker.launch 

Optional: add the argument record:=true to record all the data for 30 seconds. The default will be set to false.

- roslaunch walker walker.launch record:=true

## Inspecting Rosbag

To inspect rosbag, locate where the rosbag is saved. These usually are saved in the home/.ros/ directory. Run the following:

- rosbag info ROSBAG FILE

