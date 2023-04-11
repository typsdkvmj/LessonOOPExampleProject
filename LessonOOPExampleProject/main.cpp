#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	int avg_mark;

	//default constructor 
	Student() {
		name = "no name";
		surname = "no surname";
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
	Student st1;
	cout << st1.convert() << endl;

	/*st1.name = "ivan";
	st1.surname = "ivanov";
	st1.age = 14;
	st1.avg_mark = 10;*/


	/*cout << "before: " << endl;

	cout << st1.convert();


	st1.clear();

	cout << "\nafter: " << endl;
	cout << st1.convert();*/

	return 0;
}