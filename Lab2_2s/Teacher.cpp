#include "Teacher.h"

Teacher::Teacher()
{
	Surname = "";
	Name = "";
	Patronymic = "";
}

Teacher::Teacher(string surname)
{
	Surname = surname;
	Name = "";
	Patronymic = "";
}

Teacher::Teacher(string surname, string name, string patronymic)
{
	Surname = surname;
	Name = name;
	Patronymic = patronymic;
}

Teacher::~Teacher()
{

}

string Teacher::GetSurname()
{
	return Surname;
}

string Teacher::GetName()
{
	return Name;
}

string Teacher::GetPatronymic()
{
	return Patronymic;
}

void Teacher::Set(string surname, string name, string patronymic)
{
	Surname = surname;
	Name = name;
	Patronymic = patronymic;
}

void Teacher::SetSurname(string surname)
{
	Surname = surname;
}

void Teacher::SetName(string name)
{
	Name = name;
}

void Teacher::SetPatronymic(string patronymic)
{
	Patronymic = patronymic;
}

void Teacher::InputTeacher()
{
	this->Set("", "", "");
	cout << "������� ������� �������������: ";
	cin >> Surname;
	cout << "������� ��� �������������: ";
	cin >> Name;
	cout << "������� �������� �������������: ";
	cin >> Patronymic;
}

void Teacher::OutputTeacher()
{
	cout << "��� �������������: " << Surname << " " << Name << " " << Patronymic << endl;
}

void Teacher::ShowingWorkingWithString()
{
	Surname = Surname + "������������";
	Name = Name + "������ ��";
	Patronymic = Patronymic + "�������� :)";
}
