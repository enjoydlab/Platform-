#include "robot_v1.h"

int main(){
	robot_v1  *rv1 = new robot_v1(robot_base::VER_1);
	while(1){
		rv1->update();
	}
	delete rv1;
	return 0;
}
