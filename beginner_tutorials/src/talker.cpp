#include "ros/ros.h"
#include "std_msgs/Float64.h"

#include <sstream>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "talker");

  ros::NodeHandle n;

  ros::Publisher chatter_pub = n.advertise<std_msgs::Float64>("reportVelocity", 1000);

  ros::Rate loop_rate(10);

  int count = 2.5;

  while (ros::ok())
  {
    std_msgs::Float64 msg;

    msg.data = count;

    ROS_INFO("%f", msg.data);
    
    chatter_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
  }


  return 0;
}
