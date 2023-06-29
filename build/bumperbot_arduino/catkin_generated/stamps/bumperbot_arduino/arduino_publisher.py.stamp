#!/usr/bin/env python3
import rospy
from std_msgs.msg import Int32

if __name__ == '__main__':
    rospy.init_node('simple_publisher_py', anonymous=True)
    pub = rospy.Publisher("number_topic", Int32, queue_size=10)
    r = rospy.Rate(0.5)
    counter = 0
    while not rospy.is_shutdown():
        pub.publish(counter)
        r.sleep()
        counter+=1
        if counter==2:
            counter=0