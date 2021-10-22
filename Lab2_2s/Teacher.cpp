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
	cout << "Введите фамилию преподавателя: ";
	cin >> Teach.Surname;
	cout << "Введите имя преподавателя: ";
	cin >> Teach.Name;
	cout << "Введите отчество преподавателя: ";
	cin >> Teach.Patronymic;
}

void OutputTeacher(Teacher Teach)
{
	cout << "Данные преподавателя (ФИО): " << Teach.Surname << " " << Teach.Name << " " << Teach.Patronymic << endl;
}
