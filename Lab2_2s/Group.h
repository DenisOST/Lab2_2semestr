#pragma once

#include "Teacher.h"
#include "Student.h"

class Group {
	string Name = "";
	Student student[30];
	int Quantity;

public:
	Group();

	~Group();

	string GetName();
	Student GetStudent(int Num);
	int GetQuantity();

	void SetGroup(string Name);

	void InputGroup();

	int AddStudentToGroup(Student Student);

	void OutputGroup();

	int AverageMarkStudent();
};
