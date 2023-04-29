 #pragma once
#include "group.h"

class Manager {
public:
	float calcStudentsAvgAge(Group group );
	float calcStudentsAvgMark(Group group);
	Student findBestStudent(Group group);
	Student findWorstStudent(Group group);
};