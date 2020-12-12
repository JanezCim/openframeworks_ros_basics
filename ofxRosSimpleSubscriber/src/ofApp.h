#pragma once

#include "ofMain.h"
#include <ros/ros.h>
#include <std_msgs/String.h>
#include <iostream>
#include <sstream>
#include <string>


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		void chatterCallback(const std_msgs::String::ConstPtr& msg);
		ros::NodeHandle n_;
		ros::Subscriber sub_; 

		
};
