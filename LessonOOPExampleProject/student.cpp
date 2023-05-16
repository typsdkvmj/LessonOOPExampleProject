#include "student.h"


int Student::count = 0;

int Student::getCount() {
	return count;
}

//default constructor 
Student::Student() {
	count++;
	setName("no name");
	setSurName("no surname");
	setAge(15);
	avg_mark = 4;
}

//constructor with arguments
Student::Student(string nm, string surn, int a, float mark) {
	count++;
	//cout << "constructor with arguments" << endl;
	setName(nm);
	setSurName(surn);
	setAge(a);
	avg_mark = mark;
}


Student::~Student() {
	count--;
	//cout << "destruction" << endl;
}

float Student::getAvgMark() {
	return avg_mark;
}

void Student::setAvgMark(float mark) {
	if (mark >= 0 && mark <= 10) {
		avg_mark = mark;
	}
}
