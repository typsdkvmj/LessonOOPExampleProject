#pragma once 
#include "main.h"


class Student {
private:
	string name;
	string surname;
	int age;
	float avg_mark;

protected:
public:
	
	//default constructor 
	Student() {
		cout << "default consructor" << endl;
		name = "no name";
		surname = "no surname";
		age = 15;
		avg_mark = 4;
	}

	//constructor with arguments
	Student(string nm, string surn, int a, float mark) {
		cout << "constructor with arguments" << endl;
		name = nm;
		surname = surn;
		age = a;
		avg_mark = mark;
	}

	Student(string nm, string surn) {
		cout << "constructor with arguments" << endl;
		name = nm;
		surname = surn;
		age = 15;
		avg_mark = 4;
	}

	//copy-constructor
	Student(const Student& st) {
		cout << "copy-constructor" << endl;
		name = st.name;
		surname = st.surname;
		age = st.age;
		avg_mark = st.avg_mark;
	}

	~Student() {
		cout << "destruction" << endl;
	}

	string getName() {
		return name;
	}


	void setName(string n) {
		name = n;
	}

	string getSurmame() {
		return surname;
	}


	void setName(string n) {
		name = n;
	}

	int getAge() {
		return age;
	}

	void setAge(int a) {
		if (a > 0 && a < 110) {
			age = a;
		}
	}

	float getAvgMark() {
		return avg_mark;
	}

	float setAvgMark(float mark) {
		if (mark >= 0 && mark <= 10) {
			avg_mark = mark;
		}
	}

	void clear() {
		name = "no name";
		surname = "no surname";
		age = 0;
		avg_mark = 0;
	}

	string convert() {
		string msg = " ";
		msg += " " + surname;
		msg += " ( age = " + to_string(age);
		msg += ", average mark = " + to_string(avg_mark);
		msg += ")";
		return msg;
	}
};
