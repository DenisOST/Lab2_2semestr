#pragma once

#include "Teacher.h"
#include "Mark.h"
#include "Discipline.h"

#include "Person.h"

class Student : public Person
{
	//string Surname = "";
	//string Name = "";
	//string Patronymic = "";
	Mark mark[10];
	Discipline discipline[10];

public:
	Student();
	//Student(string surname);
	Student(string surname, string name, string patronymic, Mark m[], int M, Discipline d[], int D);

	~Student();

	//string GetSurname();
	//string GetName();
	//string GetPatronymic();
	Mark GetMark(int Num);
	Discipline GetDiscipline(int Num);

	void SetStudent(string surname, string name, string patronymic);
	//void SetSurname(string surname);
	//void SetName(string name);
	//void SetPatronymic(string patronymic);
	void SetMark(Mark m[]);
	void SetDiscipline(Discipline d[]);

	void InputFIO();

	int AddDisciplineToStudent(Discipline Discipline);

	int AddMarkToStudent(Discipline Discipline, Mark Mark);

	void OutputStudent();

	friend void FullNameExchange(Student& student, Teacher& teacher);

	Student& operator=(Person& person);

	virtual string WhoIs();
};