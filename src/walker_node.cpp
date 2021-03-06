/**
 * @file walker_node.cpp
 * @version 1.0
 * @brief Ros node that controls the turtlebot 
 * @Created on: Nov 20, 2020
 * @copyright 2020 
 * @Author Loic Barret
 */

#include "../include/control.hpp"


int main(int argc, char **argv) {
  /**
   * initialize the ros node
   */
  ros::init(argc, argv, "turtlebot_control");

  /**
   * create a control object
   */
  control turtlebot_control;

  /**
   * define what rate we want the loop to run at
   */
  ros::Rate loop_rate(125);

  /**
   * while loop that will drive the turtlebot around at the rate 
   * defined above until ros shuts down
   */
  while (ros::ok()) {
    turtlebot_control.solve();
    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;
}
