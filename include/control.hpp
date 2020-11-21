/**
 * @file       control.hpp
 * @version    1.0
 * @brief      Header file for control class.
 * @created    20th Nov 2020
 * @copyright  Copyright 2020. All rights reserved
 * @Author :   Loic Barret 
 */
#pragma once

// c++ header file
#include <iostream>
#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>
#include <geometry_msgs/Twist.h>
#include <array>

/**
 * The PIDController class has variables for each of the term as well as time
 * interval and error variables. It has the method to implement PID controller to achieve the
 * desired goal and methods to get the error variables and time interval.
 */
class control {
	// Contains public data members
public:
	control();
	bool init();
	void solve();
	
	// Contains private data members
private:
	ros::NodeHandle nh;
	ros::Publisher cmd_vel_pub;

	ros::Subscriber scan_sub;

    std::array<double, 3> scan_data = {0.0, 0.0, 0.0};

    void updateCmdVel(double linear, double angular);
    void scanCallback(const sensor_msgs::LaserScan::ConstPtr &msg);

};
