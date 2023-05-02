#include "manager.h"


int main() {

		Student st1("Ivan", "Ivanov", 14, 7.6);
	Student st2("Alex", "Invisible", 15, 10);
	Student st3("Peter", "Pen", 12, 4);
	Student st4("Harry", "Potter", 14, 9.6);
	Student st5("Alice", "Inder", 13, 8);
	
	Group group;
	group.add(st1);
	group.add(st2);
	group.add(st3);
	group.add(st4);
	group.add(st5);

	Manager manager;

	cout << "Group average age: " << manager.calcStudentsAvgAge(group) << endl;
	cout << "Group average mark: " << manager.calcStudentsAvgMark(group) << endl;
	Student s = manager.findBestStudent(group);
	cout << "Best group student: " << s.convert() << endl;

	s = manager.findWorstStudent(group);
	cout << "Worst group student: " << s.convert() << endl;

	return 0;
}