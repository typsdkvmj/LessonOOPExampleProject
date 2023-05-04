 #pragma once
#include "group.h"

class Manager {
public:
	static float calcStudentsAvgAge(Group group );
	static float calcStudentsAvgMark(Group group);
	static Student findBestStudent(Group group);
	static Student findWorstStudent(Group group);
};