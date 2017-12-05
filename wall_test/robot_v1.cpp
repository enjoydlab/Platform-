#include "robot_v1.h"
#include <createoi.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <iostream>

robot_v1 :: robot_v1(ROBOT_VER v)
{
	version = v;
	velocity = 0;
	radian = 0;
	startOI_MT("/dev/ttyUSB0");
}
robot_v1 :: ~robot_v1(){}

void robot_v1 :: update()
{
	change_mode();
	if(mode[0]||mode[1]){
		velocity = 0;
		radian = 100;
	}else{
		velocity = 100;
	}
	drive_update();
}

void robot_v1 :: drive_update()
{
	drive(velocity, radian);
	/*if(mode[1]){
		drive(velocity,radian);
	}*/
}

void robot_v1 :: change_mode()
{
	all_sensor = getAllSensors();
	//int sensor_wall = readSensor(SENSOR_WALL);
	
	//std :: cout << sensor_wall << std :: endl;

	std :: cout << all_sensor[0] << std :: endl;

	if(all_sensor[0] >= 1){
		mode[0] = true;
		//count = 0;
		std :: cout << all_sensor[0] << std :: endl;
	}else if(all_sensor[0] >= 2){
		mode[1] = true;
		//count = 0;
	}else{
		mode[0] = false;
		mode[1] = false;
	}
}
