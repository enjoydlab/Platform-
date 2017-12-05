class robot_base{
public:
	robot_base(){}
	virtual ~robot_base(){}

	void update();
	void chage_mode();

	enum ROBOT_VER{
		VER_1,
		VER_2
	};
protected:
	int velocity;
	int radian;
	ROBOT_VER version;
};
