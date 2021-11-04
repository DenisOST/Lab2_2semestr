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
	cout << "Введите фамилию преподавателя: ";
	cin >> Surname;
	cout << "Введите имя преподавателя: ";
	cin >> Name;
	cout << "Введите отчество преподавателя: ";
	cin >> Patronymic;
}

void Teacher::OutputTeacher()
{
	cout << "ФИО преподавателя: " << Surname << " " << Name << " " << Patronymic << endl;
}
