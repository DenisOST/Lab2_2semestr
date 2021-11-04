#pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>

using namespace std;

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

	void Set(string Surname, string Name, string Patronymic);

	void InputTeacher();

	void OutputTeacher();
};