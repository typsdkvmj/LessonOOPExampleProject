#include "student.h"


int Student::count = 0;

int Student::getCount() {
	return count;
}

//default constructor 
Student::Student():Human() {
	cout << "Student default constructor " << endl;
	count++;
	avg_mark = 4;
}

//constructor with arguments
Student::Student(string name, string surname, int age, float mark)
	:Human(name, surname,age)
{
	count++;
	//cout << "constructor with arguments" << endl;
	avg_mark = mark;
}


Student::~Student() {
	cout << "Student destructor " << endl;
}

float Student::getAvgMark() {
	return avg_mark;
}

void Student::setAvgMark(float mark) {
	if (mark >= 0 && mark <= 10) {
		avg_mark = mark;
	}
}
