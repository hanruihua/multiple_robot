#ifndef MSG_TRANS_TURTLEBOT_H
#define MSG_TRANS_TURTLEBOT_H

#include "ros/ros.h"
#include <geometry_msgs/Twist.h>
#include "gazebo_msgs/ModelStates.h"

std::vector<ros::Publisher> turtlebot_pub;
const int max_agent = 10;
int num_robots;

float cal_raw(geometry_msgs::Quaternion quater);




#endif
