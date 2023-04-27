#pragma once
#include "student.h"

class Manager {
public:
	float calcStudentsAvgAge(Student* list,int size);
	float calcStudentsAvgMark(Student* list, int size);
	Student findBestStudent(Student* list, int size);
	Student findWorstStudent(Student* list, int size);
};