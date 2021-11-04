#include "Discipline.h"

Discipline::Discipline()
{
	Name = "";
}

Discipline::~Discipline()
{

}

string Discipline::Get()
{
	return Name;
}

void Discipline::Set(string Name)
{
	Name = Name;
	teacher.Set("", "", "");
}

void Discipline::InputDiscipline(Teacher Teacher)
{
	this->Set("");
	cout << "Введите название дисциплины: ";
	cin >> Name;
	teacher = Teacher;
}

bool Discipline::AddTeacherToDiscipline(Teacher Teacher)
{
	bool flag = 0;

	if (teacher.GetSurname() == "") {
		teacher = Teacher;
		flag = 1;
	}

	return flag;
}

void Discipline::OutputDiscipline(Discipline Discipline)
{
	cout << "Название дисциплины: " << Name << endl;
	teacher.OutputTeacher();
}