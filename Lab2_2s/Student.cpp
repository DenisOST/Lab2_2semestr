#include "Student.h"

Student::Student()
{
	Surname = "";
	Name = "";
	Patronymic = "";
	Discipline d;
	for (int i = 0; i < 10; i++) {
		mark[i].Set(0);
	}
	for (int i = 0; i < 10; i++) {
		discipline[i].SetName("");
	}
}

Student::Student(string surname)
{
	Surname = surname;
	Name = "";
	Patronymic = "";
	for (int i = 0; i < 10; i++) {
		mark[i].Set(0);
	}
	for (int i = 0; i < 10; i++) {
		discipline[i].SetName("");
	}
}

Student::Student(string surname, string name, string patronymic, Mark m[], int M, Discipline d[], int D)
{
	Surname = surname;
	Name = name;
	Patronymic = patronymic;
	for (int i = 0; i < 10 && i < M; i++) {
		mark[i] = m[i];
	}
	for (int i = 0; i < 10 && i < D; i++) {
		discipline[i] = d[i];
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

	for (int i = 0; i < 10; i++) {
		mark[i].Set(0);
	}

	for (int i = 0; i < 10; i++) {
		discipline[i].SetName("");
	}
}

void Student::SetSurname(string surname)
{
	Surname = surname;
}

void Student::SetName(string name)
{
	Name = name;
}

void Student::SetPatronymic(string patronymic)
{
	Patronymic = patronymic;
}

void Student::SetMark(Mark m[])
{
	for (int i = 0; i < 10; i++) {
		mark[i] = m[i];
	}
}

void Student::SetDiscipline(Discipline d[])
{
	for (int i = 0; i < 10; i++) {
		discipline[i] = d[i];
	}
}


void Student::InputStudent()
{
	this->SetStudent("", "", "");
	cout << "Введите фамилию студента: ";
	cin >> Surname;
	cout << "Введите имя студента: ";
	cin >> Name;
	cout << "Введите отчество студента: ";
	cin >> Patronymic;
}

int Student::AddDisciplineToStudent(Discipline Discipline)
{
	int flag = 0;

	for (int i = 0; i < 10 && flag == 0; i++) {
		if (discipline[i].GetName() == "") {
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
		if (discipline[i].GetName() == Discipline.GetName()) {
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
	cout << "ФИО студента: " << Surname << " " << Name << " " << Patronymic << endl;
	cout << "Дисциплины: ";
	int i = 0;
	while (discipline[i].GetName() != "") {
		cout << "|" << discipline[i].GetName() << "| ";
		i++;
	}
	cout << endl;
	cout << "Баллы: ";
	i = 0;
	while (mark[i].Get() != 0) {
		cout << "|" << mark[i].Get() << "| ";
		i++;
	}
	cout << endl;
}