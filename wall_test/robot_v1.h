#include "robot_base.h"

class robot_v1 :public robot_base
{
public:
	robot_v1(ROBOT_VER v);
	~robot_v1();
	void update();
	void change_mode();
private:
	bool mode[10];
	int *all_sensor;
	int count;
	void drive_update();
};
