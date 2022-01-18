#include "Discipline.h"

Discipline::Discipline()
{
	Name = "";
	teacher = new Teacher();
	teacher->Set("", "", "");
}

Discipline::Discipline(string name)
{
	Name = name;
	teacher = new Teacher();
	teacher->Set("", "", "");
}

Discipline::Discipline(string name, Teacher t)
{
	Name = name;
	teacher = new Teacher();
	*teacher = t;
}

Discipline::~Discipline()
{

}

string Discipline::GetName()
{
	return Name;
}

Teacher Discipline::GetTeacher()
{
	return *teacher;
}

void Discipline::Set(string name, Teacher t)
{
	Name = name;
	*teacher = t;
}

void Discipline::SetName(string name)
{
	Name = name;
}

void Discipline::SetTeacher(Teacher t)
{
	*teacher = t;
}

void Discipline::InputDiscipline(Teacher Teacher)
{
	this->SetName("");
	cout << "Введите название дисциплины: ";
	cin >> Name;
	*teacher = Teacher;
}

bool Discipline::AddTeacherToDiscipline(Teacher Teacher)
{
	bool flag = 0;

	if (teacher->GetSurname() == "") {
		*teacher = Teacher;
		flag = 1;
	}

	return flag;
}

void Discipline::OutputDiscipline()
{
	cout << "Название дисциплины: " << Name << endl;
	teacher->OutputTeacher();
}