#include <iostream>
#include "Discipline.h"
#include "Teacher.h"
#include "Student.h"
#include "Group.h"
#include "Mark.h"
#include "Windows.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i;

	Teacher Teachers[3];
	Teacher* teachers = new Teacher; //Применение оператора new
	Teachers[0].Set("Попова", "Ирина", "Андреевна");
	Teachers[1].Set("Иванова", "Елена", "Сергеевна");
	Teachers[2].Set("Буянов", "Виталий", "Юрьевич");
	(*teachers).Set("Жукин", "Алексей", "Валерьевич"); //Использование (*a)

	Discipline* Disciplines = new Discipline[3]; //Динамический массив
	Discipline* disciplines = new Discipline;
	Disciplines[0].Set("Программирование");
	Disciplines[1].Set("Математика");
	Disciplines[2].Set("Экономика");
	disciplines->Set("Философия"); //Использование ->.

	for (i = 0; i < 3; i++) {
		Disciplines[i].AddTeacherToDiscipline(Teachers[i]);
	}
	(*disciplines).AddTeacherToDiscipline(*teachers);

	Mark* Marks1 = new Mark[3]; //Динамический массив
	Mark* Marks2 = new Mark[3]; //Динамический массив
	Mark* Marks3 = new Mark[3]; //Динамический массив

	Marks1[0].Set(60);
	Marks1[1].Set(80);
	Marks1[2].Set(75);
	Marks2[0].Set(50);
	Marks2[1].Set(40);
	Marks2[2].Set(80);
	Marks3[0].Set(100);
	Marks3[1].Set(30);
	Marks3[2].Set(80);

	Student* Students = new Student[3]; //Динамический массив
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
	teachers->OutputTeacher();
	cout << endl;

	for (i = 0; i < 3; i++) {
		Disciplines[i].OutputDiscipline();
		cout << endl;
	}
	(*disciplines).OutputDiscipline();
	cout << endl;

	for (i = 0; i < 3; i++) {
		Students[i].OutputStudent();
		cout << endl;
	}

	Groups.OutputGroup();
	cout << endl;

	Groups.AverageMarkStudent();
	cout << endl;

	string Surname, Name, Patronymic;
	Mark M[10];
	Discipline D[10];
	Teacher T;
	for (int i = 0; i < 3; i++) {
		Surname = "Мурин" + to_string(i);
		Name = "Сергей" + to_string(i);
		Patronymic = "Сергеевич" + to_string(i);
		T.Set(Surname, Name, Patronymic);
		M[i].Set(40 + i*10);
		D[i].Set("Дисциплина" + to_string(i));
		D[i].AddTeacherToDiscipline(T);
	}
	Student* S[3]; //Массив динамических переменных
	for (int i = 0; i < 3; i++) {
		S[i] = new Student;
		S[i]->SetStudent("Калинина" + to_string(i), "Мария" + to_string(i), "Ивановна" + to_string(i));
		S[i]->AddDisciplineToStudent(D[i]);
		S[i]->AddMarkToStudent(D[i], M[i]);
	}
	for (int i = 0; i < 3; i++) {
		S[i]->OutputStudent();
	}

	delete disciplines; //применение операторов delete, delete[];
	delete teachers;
	delete[] Students;
}
