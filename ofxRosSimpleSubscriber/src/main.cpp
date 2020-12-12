#include "ofMain.h"
#include "ofApp.h"
#include <ros/ros.h>

int main(int argc, char *argv[]){
	// init node
	ros::init(argc, argv, "listener"); 

	// set window size
	ofSetupOpenGL(1024,768,OF_WINDOW);

	// init and run app
	ofApp *app = new ofApp();
	ofRunApp(app);

}