#include "Discipline.h"

Discipline Set(string Name)
{
	Discipline Discipline;
	Discipline.Name = Name;
	Teacher Teacher;
	Teacher = Set("", "", "");
	Discipline.Teacher = Teacher;

	return Discipline;
}

Discipline InputDiscipline(Teacher Teach)
{
	Discipline Discipline;
	Discipline = Set("");
	cout << "������� �������� ����������: ";
	cin >> Discipline.Name;
	Discipline.Teacher = Teach;

	return Discipline;
}

void OutputDiscipline(Discipline Discipline)
{
	cout << "�������� ����������: " << Discipline.Name << endl;
	OutputTeacher(Discipline.Teacher);
}