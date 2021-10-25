#include "Group.h"

Group SetGroup(string Name)
{
	Group Group;
	Group.Name = Name;
	Student Student[30];
	for (int i = 0; i < 30; i++) {
		Group.Student[i] = SetStudent("", "", "");
	}

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
		cout << "|" << Group.Student[i].Surname << " " << Group.Student[i].Name << " " << Group.Student[i].Patronymic << "|" << endl;
		i++;
	}
}