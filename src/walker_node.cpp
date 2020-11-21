/**
 * @file walker_node.cpp
 * @version 3.0
 * @brief Ros broadcaster node that broadcasts a tf frame 
 * @Created on: Nov 8, 2020
 * @copyright 2020 
 * @Author Loic Barret
 */

#include "control.cpp"


int main(int argc, char **argv) {

  ros::init(argc, argv, "turtlebot_control");
  control turtlebot_control;

  ros::NodeHandle nh;


  ros::Rate loop_rate(125);

  while (ros::ok())
  {
    turtlebot_control.solve();
    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;

}