#pragma once

#include "Teacher.h"

struct Discipline {
	string Name = "";
	Teacher Teacher;
};

Discipline Set(string Name);

Discipline InputDiscipline(Teacher Teach);

int AddTeacherToDiscipline(Teacher& Teacher, Discipline& Discipline);

void OutputDiscipline(Discipline D);