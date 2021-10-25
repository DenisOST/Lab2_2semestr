#pragma once

#include "Teacher.h"
#include "Student.h"

struct Group {
	string Name = "";
	Student Student[30];
};

Group SetGroup(string Name);

Group InputGroup();

int AddStudentToGroup(Group& Group, Student& Student);

void OutputGroup(Group Group);
