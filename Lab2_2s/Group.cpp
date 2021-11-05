#include "Group.h"

Group::Group()
{
	Name = "";
	for (int i = 0; i < 30; i++) {
		student[i].SetStudent("", "", "");
	}
}

Group::~Group()
{

}

string Group::Get()
{
	return Name;
}

Student Group::GetStudent(int Num)
{
	Student s;
	if (Num >= 0 && Num < 10)
		s = student[Num];

	return s;
}

int Group::GetQuantity()
{
	return Quantity;
}

void Group::SetGroup(string name)
{
	Name = name;
	for (int i = 0; i < 30; i++) {
		student[i].SetStudent("", "", "");
	}
	Quantity = 0;
}

void Group::InputGroup()
{
	this->SetGroup("");
	cout << "Введите название группы: ";
	cin >> Name;
}

int Group::AddStudentToGroup(Student Student)
{
	int flag = 0;

	for (int i = 0; i < 30 && flag == 0; i++) {
		if (student[i].GetSurname() == "") {
			if (student[i].GetName() == "") {
				if (student[i].GetPatronymic() == "") {
					student[i] = Student;
					flag = 1;
					Quantity++;
				}
			}
		}
	}

	return flag;
}

void Group::OutputGroup()
{
	cout << "Название группы: " << Name << endl;
	cout << "Студенты группы: " << endl;
	int i = 0;
	while (student[i].GetSurname() != "" && student[i].GetSurname() != "" && student[i].GetPatronymic() != "") {
		cout << i + 1 << ". " << student[i].GetSurname() << " " << student[i].GetSurname() << " " << student[i].GetPatronymic() << endl;
		i++;
	}
}

int Group::AverageMarkStudent()
{
	OutputGroup();
	int Nomer,
		QuantityMark = 0,
		QuantitySum = 0,
		AverageMark = 0;
	cout << "Выберите студента для подсчёта среднего балла (введите его номер): ";
	cin >> Nomer;
	if (Nomer > 0 && Nomer <= Quantity) {
		for (int i = 0; i < 10 && student[Nomer - 1].GetMark(i).Get() != 0; i++) {
			QuantitySum = QuantitySum + student[Nomer - 1].GetMark(i).Get();
			QuantityMark++;
		}
		AverageMark = QuantitySum / QuantityMark;
		cout << "Средний балл студента: " << AverageMark << endl;
	}
	else
		cout << "Неправильно введён номер!";

	return AverageMark;
}