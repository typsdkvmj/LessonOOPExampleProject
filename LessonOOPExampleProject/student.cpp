#include "student.h"


//default constructor 
Student::Student() {
	cout << "default consructor" << endl;
	name = "no name";
	surname = "no surname";
	age = 15;
	avg_mark = 4;
}

//constructor with arguments
Student::Student(string nm, string surn, int a, float mark) {
	//cout << "constructor with arguments" << endl;
	name = nm;
	surname = surn;
	age = a;
	avg_mark = mark;
}

Student::Student(string nm, string surn) {
	cout << "constructor with arguments" << endl;
	name = nm;
	surname = surn;
	age = 15;
	avg_mark = 4;
}

//copy-constructor
Student::Student(const Student& st) {
	cout << "copy-constructor" << endl;
	name = st.name;
	surname = st.surname;
	age = st.age;
	avg_mark = st.avg_mark;
}

Student::~Student() {
	cout << "destruction" << endl;
}

string Student::getName() {
	return name;
}


void Student::setName(string n) {
	name = n;
}

string Student::getSurmame() {
	return surname;
}


void Student::setSurName(string n) {
	surname = n;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int a) {
	if (a > 0 && a < 110) {
		age = a;
	}
}

float Student::getAvgMark() {
	return avg_mark;
}

void Student::setAvgMark(float mark) {
	if (mark >= 0 && mark <= 10) {
		avg_mark = mark;
	}
}

void Student::clear() {
	name = "no name";
	surname = "no surname";
	age = 0;
	avg_mark = 0;
}

string Student::convert() {
	string msg = " ";
	msg += " " + surname;
	msg += " ( age = " + to_string(age);
	msg += ", average mark = " + to_string(avg_mark);
	msg += ")";
	return msg;
}