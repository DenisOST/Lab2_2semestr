#include "Teacher.h"

Teacher::Teacher()
{
	Surname = "";
	Name = "";
	Patronymic = "";
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

void Teacher::Set(string Surname, string Name, string Patronymic)
{
	Surname = Surname;
	Name = Name;
	Patronymic = Patronymic;
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
