#include "Teacher.h"

Teacher Set(string Surname, string Name, string Patronymic)
{
	Teacher Teach;
	Teach.Surname = Surname;
	Teach.Name = Name;
	Teach.Patronymic = Patronymic;

	return Teach;
}

Teacher InputTeacher()
{
	Teacher Teach;
	Teach = Set("", "", "");
	cout << "������� ������� �������������: ";
	cin >> Teach.Surname;
	cout << "������� ��� �������������: ";
	cin >> Teach.Name;
	cout << "������� �������� �������������: ";
	cin >> Teach.Patronymic;
}

void OutputTeacher(Teacher Teach)
{
	cout << "������ ������������� (���): " << Teach.Surname << " " << Teach.Name << " " << Teach.Patronymic << endl;
}
