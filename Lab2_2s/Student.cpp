#include "Student.h"

Student::Student()
{
	Surname = "";
	Name = "";
	Patronymic = "";
	for (int i = 0; i < 10; i++) {
		mark[i].Set(0);
	}
	for (int i = 0; i < 10; i++) {
		discipline[i].Set("");
	}
}

Student::~Student()
{

}

string Student::GetSurname()
{
	return Surname;
}

string Student::GetName()
{
	return Name;
}

string Student::GetPatronymic()
{
	return Patronymic;
}

Mark Student::GetMark(int Num)
{
	Mark m;
	if (Num >= 0 && Num < 10)
		m = mark[Num];

	return m;
}

Discipline Student::GetDiscipline(int Num)
{
	Discipline d;
	if (Num >= 0 && Num < 10)
		d = discipline[Num];

	return d;
}

void Student::SetStudent(string surname, string name, string patronymic)
{
	Surname = surname;
	Name = name;
	Patronymic = patronymic;

	Mark Mark[10];
	for (int i = 0; i < 10; i++) {
		mark[i].Set(0);
	}

	Discipline Discipline[10];
	for (int i = 0; i < 10; i++) {
		discipline[i].Set("");
	}
}

void Student::InputStudent(Mark Mark[10], Discipline Discipline[10])
{
	this->SetStudent("", "", "");
	cout << "������� ������� ��������: ";
	cin >> Surname;
	cout << "������� ��� ��������: ";
	cin >> Name;
	cout << "������� �������� ��������: ";
	cin >> Patronymic;
}

int Student::AddDisciplineToStudent(Discipline Discipline)
{
	int flag = 0;

	for (int i = 0; i < 10 && flag == 0; i++) {
		if (discipline[i].Get() == "") {
			discipline[i] = Discipline;
			flag = 1;
		}
	}

	return flag;
}

int Student::AddMarkToStudent(Discipline Discipline, Mark Mark)
{
	int flag = 0;

	for (int i = 0; i < 10 && flag == 0; i++) {
		if (discipline[i].Get() == Discipline.Get()) {
			if (discipline[i].GetTeacher().GetSurname() == Discipline.GetTeacher().GetSurname()) {
				if (discipline[i].GetTeacher().GetName() == Discipline.GetTeacher().GetName()) {
					if (discipline[i].GetTeacher().GetPatronymic() == Discipline.GetTeacher().GetPatronymic()) {
						mark[i] = Mark;
						flag = 1;
					}
				}
			}
		}
	}

	return flag;
}

void Student::OutputStudent()
{
	cout << "��� ��������: " << Surname << " " << Name << " " << Patronymic << endl;
	cout << "����������: ";
	int i = 0;
	while (discipline[i].Get() != "") {
		cout << "|" << discipline[i].Get() << "| ";
		i++;
	}
	cout << endl;
	cout << "�����: ";
	i = 0;
	while (mark[i].Get() != 0) {
		cout << "|" << mark[i].Get() << "| ";
		i++;
	}
	cout << endl;
}