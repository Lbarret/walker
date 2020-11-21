/**
 * @file       control.cpp
 * @version    1.0
 * @brief      
 * @created    20th Nov 2020
 * @copyright  Copyright 2020. All rights reserved
 * @Author :   Loic Barret 
 */

// user defined header files for PID Controller
#include "../include/control.hpp"

// c++ header file
#include <iostream>

/**
 * @brief PID default constructor
 * @param none
 * @return none
 */
control::control() { }

/**
 * @brief    PID parameterized constructor sets values of gains
 * @param[1] prop_gain, which is the proportional gain
 * @param[2] int_gain, which is the intgral gain
 * @param[3] diff_gain, which is the differential gain
 * @return 	 none
 */
control::control(double prop_gain, double int_gain, double diff_gain){
	kp = prop_gain;
	ki = int_gain;
	kd = diff_gain;
}
/**
 * @brief      Next three functions return values of kp, ki and kd
 * @param      none
 * @return     The propotional gain.
 * @return     The integral gain
 * @return     The differential gain
 */
double control::GetKp() {
	return kp;
}
double control::GetKi() {
	return ki;
}
double control::GetKd() {
	return kd;
}
