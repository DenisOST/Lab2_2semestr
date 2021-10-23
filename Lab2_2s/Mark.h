#pragma once

#include "Teacher.h"

struct Mark {
	int Number = 0;
};

Mark Set(int M);

Mark InputMark();

void OutputMark(Mark M);