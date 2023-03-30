#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	int avg_mark;
};

void clear(Student st) {
	st.name = "no name";
	st.surname = "no surname";
	st.age = 0;
	st.avg_mark = 0;
}

int main() {
	Student st1;

	st1.name = "ivan";
	st1.surname = "ivanov";
	st1.age = 14;
	st1.avg_mark = 10;


	cout << "before: " << endl;

	cout << st1.name << endl;
	cout << st1.surname << endl;
	cout << st1.age << endl;
	cout << st1.avg_mark << endl;


	clear(st1);

	cout << "\nafter: " << endl;

	cout << st1.name << endl;
	cout << st1.surname << endl;
	cout << st1.age << endl;
	cout << st1.avg_mark << endl;

	return 0;
}