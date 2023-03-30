#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	int avg_mark;
};
int main() {
	Student st;

		cout << st.name << endl;
		cout << st.surname << endl;
		cout << st.age << endl;
		cout << st.avg_mark << endl;

	return 0;
}