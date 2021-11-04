#pragma once

#include "Teacher.h"

class Discipline {
	string Name = "";
	Teacher teacher;

public:
	Discipline();

	~Discipline();

	string Get();

	void Set(string Name);

	void InputDiscipline(Teacher Teacher);

	bool AddTeacherToDiscipline(Teacher Teacher);

	void OutputDiscipline(Discipline D);
};