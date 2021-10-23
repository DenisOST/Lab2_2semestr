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

