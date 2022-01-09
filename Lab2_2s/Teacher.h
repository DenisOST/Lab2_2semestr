#pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>

using namespace std;

class Student;

class Teacher {
	string Surname = "";
	string Name = "";
	string Patronymic = "";

public:
	Teacher();

	~Teacher();

	string GetSurname();
	string GetName();
	string GetPatronymic();

	void Set(string surname, string name, string patronymic);

	void InputTeacher();

	void OutputTeacher();

	friend void FullNameExchange(Student& student, Teacher& teacher);

	void ShowingWorkingWithString();
};