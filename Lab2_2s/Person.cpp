#include "Person.h"

Person::Person()
{
    Surname = "";
    Name = "";
    Patronymic = "";
}

Person::Person(string surname, string name, string patronymic)
{
    Surname = surname;
    Name = name;
    Patronymic = patronymic;
}

Person::~Person()
{
    
}

string Person::GetSurname()
{
    return this->Surname;
}

string Person::GetName()
{
    return this->Name;
}

string Person::GetPatronymic()
{
    return this->Patronymic;
}

void Person::GetSurnameLink(string& surname)
{
    surname = this->Surname;
}

void Person::GetNameLink(string& name)
{
    name = this->Name;
}

void Person::GetPatronymicLink(string& patronymic)
{
    patronymic = this->Patronymic;
}

void Person::SetSurname(string surname)
{
    Surname = surname;
}

void Person::SetName(string name)
{
    Name = name;
}

void Person::SetPatronymic(string patronymic)
{
    Patronymic = patronymic;
}

void Person::Set(string surname, string name, string patronymic)
{
    this->Surname = surname;
    this->Name = name;
    this->Patronymic = patronymic;
}

void Person::InputFIO()
{
    cout << "������� �������: ";
    cin >> Surname;
    cout << "������� ���: ";
    cin >> Name;
    cout << "������� ��������: ";
    cin >> Patronymic;
}

void Person::OutputPerson()
{
    cout << "���: " << Surname << " " << Name << " " << Patronymic << endl;

}

string Person::WhoIs()
{
    return "���-��";
}

void Person::SayHello()
{
    cout << WhoIs() << " ������� ������!" << endl;
}