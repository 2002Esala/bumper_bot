#!/usr/bin/env python3
import rospy
from bumperbot_controller.simple_controller import SimpleController

if __name__ == '__main__':
    rospy.init_node('simple_controller')
    
    wheel_radius = rospy.get_param('~wheel_radius')
    wheel_seperation = rospy.get_param('~wheel_seperation')
    controller = SimpleController(wheel_radius, wheel_seperation)

    rospy.spin()