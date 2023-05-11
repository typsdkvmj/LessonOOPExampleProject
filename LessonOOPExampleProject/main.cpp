#include "manager.h"


int main() {

		Student st1("Ivan", "Ivanov", 14, 7.6);
	Student st2("Alex", "Invisible", 15, 10);
	{
		Student st3("Peter", "Pen", 12, 4);
	}
	Student st4("Harry", "Potter", 14, 9.6);
	Student st5("Alice", "Inder", 13, 8);
	
	cout << "Number of students: " << Student::getCount() << endl;
	return 0;
}