#pragma once

#include "Teacher.h"
#include "Mark.h"
#include "Discipline.h"

struct Student {
	string Surname = "";
	string Name = "";
	string Patronymic = "";
	Mark Mark[10];
	Discipline Discipline[10];
};

Student SetStudent(string Surname, string Name, string Patronymic);

Student InputStudent(Mark Mark[10], Discipline Discipline[10]);

int AddDisciplineToStudent(Student& Student, Discipline& Discipline);

int AddMarkToStudent(Student& Student, Discipline& Discipline, Mark& Mark);

void OutputStudent(Student Student);