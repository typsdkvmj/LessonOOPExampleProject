#pragma once
#include "human.h"
class Teacher:public Human {

private:
	string subgect;

public: 
	Teacher();
	Teacher(string nm, string sn, int a, string sb);
	
};

