#!/usr/bin/env python3
import rospy
from bumperbot_examples.tf_examples import TfExamples

if __name__ == 'main':
    rospy.init_node('tf_exmples')
    tfExamples = TfExamples()
    rospy.spin()
    
    