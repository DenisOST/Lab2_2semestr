#include "Student.h"

Student SetStudent(string Surname, string Name, string Patronymic)
{
	Student Student;
	Student.Surname = Surname;
	Student.Name = Name;
	Student.Patronymic = Patronymic;

	Mark Mark[10];
	for (int i = 0; i < 10; i++) {
		Student.Mark[i] = Set(0);
	}

	Discipline Discipline[10];
	for (int i = 0; i < 10; i++) {
		Student.Discipline[i] = Set("");
	}

	return Student;
}

Student InputStudent(Mark Mark[10], Discipline Discipline[10])
{
	Student Student;
	Student = SetStudent("", "", "");
	cout << "Введите фамилию студента: ";
	cin >> Student.Surname;
	cout << "Введите имя студента: ";
	cin >> Student.Name;
	cout << "Введите отчество студента: ";
	cin >> Student.Patronymic;

	return Student;
}

int AddDisciplineToStudent(Student& Student, Discipline& Discipline)
{
	int flag = 0;

	for (int i = 0; i < 10 && flag == 0; i++) {
		if (Student.Discipline[i].Name == "") {
			Student.Discipline[i] = Discipline;
			flag = 1;
		}
	}

	return flag;
}

int AddMarkToStudent(Student& Student, Discipline& Discipline, Mark& Mark)
{
	int flag = 0;

	for (int i = 0; i < 10 && flag == 0; i++) {
		if (Student.Discipline[i].Name == Discipline.Name) {
			if (Student.Discipline[i].Teacher.Surname == Discipline.Teacher.Surname) {
				if (Student.Discipline[i].Teacher.Name == Discipline.Teacher.Name) {
					if (Student.Discipline[i].Teacher.Patronymic == Discipline.Teacher.Patronymic) {
						Student.Mark[i] = Mark;
						flag = 1;
					}
				}
			}
		}
	}

	return flag;
}

void OutputStudent(Student Student)
{
	cout << "ФИО студента: " << Student.Surname << " " << Student.Name << " " << Student.Patronymic << endl;
	cout << "Дисциплины: ";
	int i = 0;
	while (Student.Discipline[i].Name != "") {
		cout << "|" << Student.Discipline[i].Name << "|" << endl;
		i++;
	}
	cout << "Баллы: ";
	int i = 0;
	while (Student.Mark[i].Number != 0) {
		cout << "|" << Student.Mark[i].Number << "|" << endl;
		i++;
	}
}