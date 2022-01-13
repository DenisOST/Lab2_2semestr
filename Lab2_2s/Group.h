#pragma once

#include "Teacher.h"
#include "Student.h"

class Group {
	string Name = "";
	Student* student = new Student[30];
	int Quantity;

public:
	Group();
	Group(string name);
	Group(string name, Student s[], int q);
	Group(const Group& group);

	~Group();

	string GetName();
	Student GetStudent(int Num);
	int GetQuantity();

	void Set(string name, Student s[], int q);
	void SetGroup(string name);
	void SetStudent(Student s[]);

	void InputGroup();

	int AddStudentToGroup(Student Student);

	void OutputGroup();

	int AverageMarkStudent();

	Group& operator=(const Group& Class);
};
