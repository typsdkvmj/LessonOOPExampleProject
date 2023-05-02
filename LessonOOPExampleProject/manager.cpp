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

	float Manager::calcStudentsAvgMark(Group group) {
		float avg = 0;

		for (int i = 0; i < group.getSize(); i++)
		{
			Student st = group.getStudent(i);
			avg += st.getAvgMark();
		}

		return avg / group.getSize();
	}
	Student Manager::findBestStudent(Group group) {
		Student st = group.getStudent(0);

		for (int i = 1; i < group.getSize(); i++) {
			if (st.getAvgMark() < group.getStudent(i).getAvgMark())
				st = group.getStudent(i);
		}
		return st;
	}
	Student Manager::findWorstStudent(Group group) {
		Student st = group.getStudent(0);

		for (int i = 1; i < group.getSize(); i++) {
			if (st.getAvgMark() > group.getStudent(i).getAvgMark())
				st = group.getStudent(i);
		}
		return st;

}
