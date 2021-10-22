#pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale.h>

using namespace std;

struct Teacher {
	string Surname = "";
	string Name = "";
	string Patronymic = "";
};

Teacher Set(string Surname, string Name, string Patronymic);

Teacher InputTeacher();

void OutputTeacher(Teacher Teach);