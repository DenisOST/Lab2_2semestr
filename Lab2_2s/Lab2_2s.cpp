#include <iostream>
#include "Discipline.h"
#include "Teacher.h"
#include "Student.h"
#include "Group.h"
#include "Mark.h"
#include "Windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i;

	Teacher* Teachers = new Teacher[3];
	Teachers[0] = Set("Попова", "Ирина", "Андреевна");
	Teachers[1] = Set("Иванова", "Елена", "Сергеевна");
	Teachers[2] = Set("Буянов", "Виталий", "Юрьевич");

	Discipline* Disciplines = new Discipline[3];
	Disciplines[0] = Set("Программирование");
	Disciplines[1] = Set("Математика");
	Disciplines[2] = Set("Экономика");
	for (i = 0; i < 3; i++) {
		AddTeacherToDiscipline(Teachers[i], Disciplines[i]);
	}

	Mark* Marks1 = new Mark[3];
	Mark* Marks2 = new Mark[3];
	Mark* Marks3 = new Mark[3];

	Marks1[0] = Set(60);
	Marks1[1] = Set(80);
	Marks1[2] = Set(75);
	Marks2[0] = Set(50);
	Marks2[1] = Set(40);
	Marks2[2] = Set(80);
	Marks3[0] = Set(100);
	Marks3[1] = Set(30);
	Marks3[2] = Set(80);

	Student* Students = new Student[3];
	Students[0] = SetStudent("Андреев", "Сергей", "Васильевич");
	Students[1] = SetStudent("Авдеев", "Антон", "Александрович");
	Students[2] = SetStudent("Сергеев", "Юрий", "Владимирович");

	for (i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			AddDisciplineToStudent(Students[i], Disciplines[j]);
		}
	}

	for (int j = 0; j < 3; j++) {
		AddMarkToStudent(Students[0], Disciplines[j], Marks1[j]);
	}

	for (int j = 0; j < 3; j++) {
		AddMarkToStudent(Students[1], Disciplines[j], Marks2[j]);
	}

	for (int j = 0; j < 3; j++) {
		AddMarkToStudent(Students[2], Disciplines[j], Marks3[j]);
	}

	Group* Groups = new Group[1];
	Groups[0] = SetGroup("ПИ-01");

	for (i = 0; i < 3; i++) {
		AddStudentToGroup(Groups[0], Students[i]);
	}

	for (i = 0; i < 3; i++) {
		OutputTeacher(Teachers[i]);
		cout << endl;
	}

	for (i = 0; i < 3; i++) {
		OutputDiscipline(Disciplines[i]);
		cout << endl;
	}

	for (i = 0; i < 3; i++) {
		OutputStudent(Students[i]);
		cout << endl;
	}

	OutputGroup(Groups[0]);
	cout << endl;
}
