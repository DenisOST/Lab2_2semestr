#include "Discipline.h"

Discipline::Discipline()
{
	Name = "";
	teacher.Set("", "", "");
}

Discipline::~Discipline()
{

}

string Discipline::Get()
{
	return Name;
}

Teacher Discipline::GetTeacher()
{
	return teacher;
}

void Discipline::Set(string name)
{
	Name = name;
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

void Discipline::OutputDiscipline()
{
	cout << "Название дисциплины: " << Name << endl;
	teacher.OutputTeacher();
}