#pragma once

#include "Teacher.h"

class Discipline {
	string Name = "";
	Teacher* teacher;

public:
	Discipline();
	Discipline(string name);
	Discipline(string name, Teacher t);

	~Discipline();

	string GetName();
	Teacher GetTeacher();

	void Set(string name, Teacher t);
	void SetName(string name);
	void SetTeacher(Teacher t);

	void InputDiscipline(Teacher Teacher);

	bool AddTeacherToDiscipline(Teacher Teacher);

	void OutputDiscipline();
};