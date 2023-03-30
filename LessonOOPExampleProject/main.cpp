#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	int avg_mark;
};
int main() {
	Student st1;

	st1.name = "ivan";
	st1.surname = "ivanov";
	st1.age = 14;
	st1.avg_mark = 10;

	Student st2 = st1;

	cout << "before: " << endl;

		cout << st1.name << endl;
		cout << st1.surname << endl;
		cout << st1.age << endl;
		cout << st1.avg_mark << endl;

		cout << st2.name << endl;
		cout << st2.surname << endl;
		cout << st2.age << endl;
		cout << st2.avg_mark << endl;

		st1.avg_mark = 7;

		cout << "\nafter: " << endl;

		cout << st1.name << endl;
		cout << st1.surname << endl;
		cout << st1.age << endl;
		cout << st1.avg_mark << endl;

		cout << st2.name << endl;
		cout << st2.surname << endl;
		cout << st2.age << endl;
		cout << st2.avg_mark << endl;

	return 0;
}