#pragma once

#include "Teacher.h"
#include "Mark.h"
#include "Discipline.h"

class Student {
	string Surname = "";
	string Name = "";
	string Patronymic = "";
	Mark mark[10];
	Discipline discipline[10];

public:
	Student();

	~Student();

	string GetSurname();
	string GetName();
	string GetPatronymic();
	Mark GetMark(int Num);
	Discipline GetDiscipline(int Num);

	void SetStudent(string surname, string same, string satronymic);

	void InputStudent(Mark Mark[10], Discipline Discipline[10]);

	int AddDisciplineToStudent(Discipline Discipline);

	int AddMarkToStudent(Discipline Discipline, Mark Mark);

	void OutputStudent();
};

