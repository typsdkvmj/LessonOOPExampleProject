#pragma once 
#include "human.h"

class Student:public Human {
private:
	static int count;

	float avg_mark;

public:
	Student();
	Student(string nm, string surn, int a, float mark);
	~Student();

	static int getCount();

	float getAvgMark();
	void setAvgMark(float mark);
};
