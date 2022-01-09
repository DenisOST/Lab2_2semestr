#include <iostream>
#include "Discipline.h"
#include "Teacher.h"
#include "Student.h"
#include "Group.h"
#include "Mark.h"
#include "Windows.h"

// Инициализация статическоко компанента (указателя):
Mark* Mark::last_mark = NULL;

void FullNameExchange(Student &student, Teacher &teacher)
{
	string Name, Surname, Patronymic;

	Name = teacher.Name;
	teacher.Name = student.Name;
	student.Name = Name;

	Surname = teacher.Surname;
	teacher.Surname = student.Surname;
	student.Surname = Surname;

	Patronymic = teacher.Patronymic;
	teacher.Patronymic = student.Patronymic;
	student.Patronymic = Patronymic;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i;

	Teacher Teachers[3];
	Teachers[0].Set("Попова", "Ирина", "Андреевна");
	Teachers[1].Set("Иванова", "Елена", "Сергеевна");
	Teachers[2].Set("Буянов", "Виталий", "Юрьевич");

	Discipline Disciplines[3];
	Disciplines[0].Set("Программирование");
	Disciplines[1].Set("Математика");
	Disciplines[2].Set("Экономика");

	for (i = 0; i < 3; i++) {
		Disciplines[i].AddTeacherToDiscipline(Teachers[i]);
	}

	Mark Marks1[3];
	Mark Marks2[3];
	Mark Marks3[3];

	Marks1[0].Set(60);
	Marks1[1].Set(80);
	Marks1[2].Set(75);
	Marks2[0].Set(50);
	Marks2[1].Set(40);
	Marks2[2].Set(80);
	Marks3[0].Set(100);
	Marks3[1].Set(30);
	Marks3[2].Set(80);

	Student Students[3];
	Students[0].SetStudent("Андреев", "Сергей", "Васильевич");
	Students[1].SetStudent("Авдеев", "Антон", "Александрович");
	Students[2].SetStudent("Сергеев", "Юрий", "Владимирович");

	for (i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			Students[i].AddDisciplineToStudent(Disciplines[j]);
		}
	}

	for (int j = 0; j < 3; j++) {
		Students[0].AddMarkToStudent(Disciplines[j], Marks1[j]);
	}

	for (int j = 0; j < 3; j++) {
		Students[1].AddMarkToStudent(Disciplines[j], Marks2[j]);
	}

	for (int j = 0; j < 3; j++) {
		Students[2].AddMarkToStudent(Disciplines[j], Marks3[j]);
	}

	Group Groups; 
	Groups.SetGroup("ПИ-01");

	for (i = 0; i < 3; i++) {
		Groups.AddStudentToGroup(Students[i]);
	}

	for (i = 0; i < 3; i++) {
		Teachers[i].OutputTeacher();
		cout << endl;
	}

	for (i = 0; i < 3; i++) {
		Disciplines[i].OutputDiscipline();
		cout << endl;
	}

	for (i = 0; i < 3; i++) {
		Students[i].OutputStudent();
		cout << endl;
	}

	Groups.OutputGroup();
	cout << endl;

	Groups.AverageMarkStudent();
	cout << endl;



	cout << "1) Продемонстрировать возврат значения из метода через указатель (*) и через ссылку (&)" << endl;
	int link;
	int& Link = link;
	int* Pointer = new int;
	Marks1[0].GetMarkLink(Link);
	Marks1[1].GetMarkPointer(Pointer);
	cout <<"Ссылка: " << Link << endl;
	cout <<"Указатель: " << *Pointer << endl;
	cout << endl;

	cout << "2) Продемонстрировать разумное использование оператора this" << endl;
	// Формирование объектов класса Mark:
	Mark A;
	Mark B;
	Mark C;
	Mark D;
	A.Set(10);
	B.Set(20);
	C.Set(30);
	D.Set(40);
	// Вызов статической компанентной функции:
	Mark::Reprint();
	// Включение созданных компанентов в двусвязанный список:
	A.Add(); B.Add(); C.Add(); D.Add();

	// Печать в обратном порядке значений элементов списка:
	Mark::Reprint();
	cout << endl << endl;
	
	cout << "3) Придумать и реализовать разумное использование дружественной функции" << endl;
	cout << "ФИО до обмена:" << endl;
	cout << "Преподаватель: "; Teachers[0].OutputTeacher();
	cout << "Студент: "; Students[0].OutputStudent();
	cout << endl;
	FullNameExchange(Students[0], Teachers[0]);
	cout << "ФИО после обмена:" << endl;
	cout << "Преподаватель: "; Teachers[0].OutputTeacher();
	cout << "Студент: "; Students[0].OutputStudent();
	cout << endl;

	cout << "4) Выполнить перегрузку операторов '+', '++' (два варианта, префиксный и постфиксный)" << endl;
	Mark MarkPlus;
	MarkPlus.Set(50);
	MarkPlus.OutputMark();
	cout << "Оператор + (прибавим 10 баллов):" << endl;
	MarkPlus = MarkPlus + 10;
	MarkPlus.OutputMark();
	cout << "Оператор ++ префиксный:" << endl;
	++MarkPlus;
	MarkPlus.OutputMark();
	cout << "Оператор ++ постфиксный:" << endl;
	MarkPlus++;
	MarkPlus.OutputMark();
	cout << endl;

	cout << "5) Заменить массивы char на std::string, продемонстрировать работу с этим классом" << endl;
	Teacher TeacherString;
	TeacherString.Set("", "", "");
	TeacherString.ShowingWorkingWithString();
	TeacherString.OutputTeacher();
	cout << endl;
}
