#pragma once

#include "Teacher.h"

struct Discipline {
	string Name = "";
	Teacher Teacher;
};

Discipline Set(string Name);

Discipline InputDiscipline(Teacher Teach);

void OutputDiscipline(Discipline D);