#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;

	//default constructor 
	Student() {
		cout << "default consructor" << endl;
		name = "no name";
		surname = "no surname";
		age = 15;
		avg_mark = 4;
	}

	//constructor with arguments
	Student(string nm,string surn,int a,float mark) {
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


	~Student() {
		cout << "destruction" << endl;
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



int main() {
	Student st1;                              //calling default-constructor
	Student st2("ivan", "ivanov", 14, 10);   //calling constructor with arguments
	Student st3("dima", "gus");

	cout << st1.convert() << endl;
	cout << st2.convert() << endl;
	cout << st3.convert() << endl;

	
	return 0;
}