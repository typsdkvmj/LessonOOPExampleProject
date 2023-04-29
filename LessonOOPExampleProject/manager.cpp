#include "manager.h"

float Manager::calcStudentsAvgAge(Group group) {
	float avg = 0;

	for (int i = 0; i < group.getSize(); i++)
	{
		Student st = group.getStudent(i);
		avg += st.getAge();

	}


	return avg / group.getSize();
}
