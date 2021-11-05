#pragma once

#include "Teacher.h"

class Discipline {
	string Name = "";
	Teacher teacher;

public:
	Discipline();

	~Discipline();

	string Get();
	Teacher GetTeacher();

	void Set(string name);

	void InputDiscipline(Teacher Teacher);

	bool AddTeacherToDiscipline(Teacher Teacher);

	void OutputDiscipline();
};