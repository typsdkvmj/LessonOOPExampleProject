#pragma once 
#include "main.h"
class Human {
private:

	
	
public:

	string name;
	string surname;
	int age;

	Human();
	Human(string nm, string surn, int a);
	~Human();

	string getName();
	void setName(string n);
	string getSurmame();
	void setSurName(string n);
	int getAge();
	void setAge(int a);

	string convert();
};