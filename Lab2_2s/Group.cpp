#include "Group.h"

Group SetGroup(string Name)
{
	Group Group;
	Group.Name = Name;
	Student Student[30];
	for (int i = 0; i < 30; i++) {
		Group.Student[i] = SetStudent("", "", "");
	}
	Group.Quantity = 0;

	return Group;
}

Group InputGroup()
{
	Group Group;
	Group = SetGroup("");
	cout << "Введите название группы: ";
	cin >> Group.Name;

	return Group;
}

int AddStudentToGroup(Group& Group, Student& Student)
{
	int flag = 0;

	for (int i = 0; i < 30 && flag == 0; i++) {
		if (Group.Student[i].Surname == "") {
			if (Group.Student[i].Name == "") {
				if (Group.Student[i].Patronymic == "") {
					Group.Student[i] = Student;
					flag = 1;
					Group.Quantity++;
				}
			}
		}
	}

	return flag;
}

void OutputGroup(Group Group)
{
	cout << "Название группы: " << Group.Name << endl;
	cout << "Студенты группы: " << endl;
	int i = 0;
	while (Group.Student[i].Surname != "" && Group.Student[i].Name != "" && Group.Student[i].Patronymic != "") {
		cout << i + 1 << ". " << Group.Student[i].Surname << " " << Group.Student[i].Name << " " << Group.Student[i].Patronymic << endl;
		i++;
	}
}

int AverageMarkStudent(Group& Group)
{
	OutputGroup(Group);
	int Nomer,
		QuantityMark = 0,
		QuantitySum = 0,
		AverageMark = 0;
	cout << "Выберите студента для подсчёта среднего балла (введите его номер): ";
	cin >> Nomer;
	if (Nomer > 0 && Nomer <= Group.Quantity) {
		for (int i = 0; i < 10 && Group.Student[Nomer - 1].Mark[i].Number != 0; i++) {
			QuantitySum = QuantitySum + Group.Student[Nomer - 1].Mark[i].Number;
			QuantityMark++;
		}
		AverageMark = QuantitySum / QuantityMark;
		cout << "Средний балл студента: " << AverageMark << endl;
	}
	else
		cout << "Неправильно введён номер!";

	return AverageMark;
}