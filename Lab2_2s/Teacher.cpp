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

void Teacher::ShowingWorkingWithString()
{
	Surname = Surname + "Демонстрация";
	Name = Name + "работы со";
	Patronymic = Patronymic + "строками :)";
}
