#include "Teacher.h"

Teacher::Teacher()
{
	Surname = "";
	Name = "";
	Patronymic = "";
}

/*
Teacher::Teacher(string surname)
{
	Surname = surname;
	Name = "";
	Patronymic = "";
}
*/

Teacher::Teacher(string surname, string name, string patronymic)
{
	Surname = surname;
	Name = name;
	Patronymic = patronymic;
}

Teacher::~Teacher()
{

}

/*
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
*/

void Teacher::Set(string surname, string name, string patronymic)
{
	Surname = surname;
	Name = name;
	Patronymic = patronymic;
}

/*
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
*/

void Teacher::InputFIO()
{
	/*
	this->Set("", "", "");
	cout << "Введите фамилию преподавателя: ";
	cin >> Surname;
	cout << "Введите имя преподавателя: ";
	cin >> Name;
	cout << "Введите отчество преподавателя: ";
	cin >> Patronymic;
	*/
	cout << "Введите данные о преподавателе:" << endl;
	Person::InputFIO();

}

void Teacher::OutputTeacher()
{
	cout << "ФИО преподавателя: " << Surname << " " << Name << " " << Patronymic << endl;
}

Teacher& Teacher::operator=(Person& person)
{
	this->Surname = person.GetSurname();
	this->Name = person.GetName();
	this->Patronymic = person.GetPatronymic();

	return *this;
}

std::ostream& operator<< (std::ostream& out, const Teacher& teacher)
{
	out << "ФИО преподавателя: " << teacher.Surname << " " << teacher.Name << " " << teacher.Patronymic;

	return out;
}

string Teacher::WhoIs()
{
	return "Преподаватель";
}

/*
void Teacher::ShowingWorkingWithString()
{
	Surname = Surname + "Демонстрация";
	Name = Name + "работы со";
	Patronymic = Patronymic + "строками :)";
}
*/
