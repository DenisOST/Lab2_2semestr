#pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>

#include "Person.h"

using namespace std;

class Student;

class Teacher : public Person 
{
	//string Surname = "";
	//string Name = "";
	//string Patronymic = "";

public:
	Teacher();
	//Teacher(string surname);
	Teacher(string surname, string name, string patronymic);

	~Teacher();

	//string GetSurname();
	//string GetName();
	//string GetPatronymic();

	void Set(string surname, string name, string patronymic);
	//void SetSurname(string surname);
	//void SetName(string name);
	//void SetPatronymic(string patronymic);

	void InputFIO();

	void OutputTeacher();

	friend void FullNameExchange(Student& student, Teacher& teacher);

	Teacher& operator=(Person& person);

	friend std::ostream& operator<< (std::ostream& out, const Teacher& teaher);

	virtual string WhoIs();

	//void ShowingWorkingWithString();
};