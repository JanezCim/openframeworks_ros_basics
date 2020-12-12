# Basic examples of getting ROS to work with Openframeworks

## Tested with 
Openframeworks 0.11.0

ROS Melodic

Linux 18.04

## Setup and Running

Install openframeworks by following official instructions: https://openframeworks.cc/setup/linux-install/

Install ROS Melodic: http://wiki.ros.org/melodic/Installation/Ubuntu

After they are installed, do:

    cd <path_to_openframeworks_folder>/apps/myApps/
    git clone https://github.com/JanezCim/openframeworks_ros_basics.git

And then cd into any of the ofx apps, compile and run - example given for simple publisher:

    cd <path_to_openframeworks_folder>/apps/myApps/openframeworks_ros_basics/ofxRosSimplePublisher/
    make
    ./bin/ofxRosSimplePublisher

After that you will need to open another terminal, run roscore for the program to start.

## Debug

If you want to have the examples elswhere then in <path_to_openframeworks_folder>/apps/myApps/openframeworks_ros_basics/ then you need to edit the OF_ROOT in each Makefile of each ofx app