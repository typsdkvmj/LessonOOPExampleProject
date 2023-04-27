#pragma once 
#include "main.h"


class Student {
private:
	string name;
	string surname;
	int age;
	float avg_mark;


public:
	Student();
	Student(string nm, string surn, int a, float mark);
	Student(string nm, string surn);
	Student(const Student& st);
	~Student();
	string getName();
	void setName(string n);
	string getSurmame();
	void setSurName(string n);
	int getAge();
	void setAge(int a);
	float getAvgMark();
	void setAvgMark(float mark);
	void clear();
	string convert();
};
