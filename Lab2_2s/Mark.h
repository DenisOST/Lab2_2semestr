#pragma once

#include "Teacher.h"

class Mark {
	int Number = 0;


public:
	Mark();

	~Mark();

	int Get();

	void Set(int M);

	void InputMark();

	void OutputMark();
};