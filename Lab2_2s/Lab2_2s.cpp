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

	Teacher TeacherFor8;
	TeacherFor8.InputFIO();

	/*
	cout << "4) Продемонстрировать в конструкторе производного класса с параметрами вызов конструктора базового класса" << endl;
	Teacher TeacherFor4("Иванова", "Марина", "Витальевна");
	TeacherFor4.OutputTeacher();
	cout << endl;

	cout << "5) Выполнить перегрузку оператора присваивания объекту производного класса объектов базового класса" << endl;
	Person PersonFor5("Попова", "Ирина", "Андреевна");
	Teacher TeacherFor5("Буянов", "Виталий", "Юрьевич");

	PersonFor5.OutputPerson();
	TeacherFor5.OutputTeacher();

	cout << endl;
	TeacherFor5 = PersonFor5;

	PersonFor5.OutputPerson();
	TeacherFor5.OutputTeacher();
	cout << endl;

	cout << "6) Заменить методы Display используя операции << для C++" << endl;
	Teacher TeacherFor6("Андреев", "Сергей", "Васильевич");
	
	cout << TeacherFor6 << endl;
	cout << endl;

	cout << "7) Придумать разумное использование виртуальных функций и создать их в вашем проекте. Вызов виртуальной функции продемонстрировать через ее вызов не виртуальной функцией базового класса и через динамические объекты базового и производного классов после присваивания указателя. Продемонстрировать изменение работы программы, если функция не виртуальная (С++)." << endl;
	Person PersonFor7("Иванова", "Марина", "Витальевна");
	Teacher TeacherFor7("Попова", "Ирина", "Андреевна");

	PersonFor7.OutputPerson();
	TeacherFor7.OutputTeacher();
	cout << endl;
	PersonFor7.SayHello();
	TeacherFor7.SayHello();

	Person* PersoneFor7Uk1 = &TeacherFor7;
	Teacher* TeacherFor7Uk = &TeacherFor7;
	Person* PersoneFor7Uk2 = &PersonFor7;

	cout << "Объект класса Учитель" << endl;
	TeacherFor7.OutputTeacher();
	cout << endl;
	cout << "Указатель класса Персона на класс Учитель" << endl;
	PersoneFor7Uk1->OutputPerson();
	cout << endl;
	cout << "Указатель класса Персона на класс Учитель" << endl;
	PersoneFor7Uk2->OutputPerson();
	cout << endl;
	cout << "Вызов виртуальной функции через не виртуальную базового класса" << endl;
	cout << "от объекта класса Учитель" << endl;
	TeacherFor7.SayHello();
	cout << endl;
	cout << "Вызов виртуальной функции через не виртуальную базового класса" << endl;
	cout << "от объекта класса Персона" << endl;
	PersonFor7.SayHello();
	cout << endl;
	cout << "от указателя Персона на объект класса Учитель" << endl;
	cout << PersoneFor7Uk1->WhoIs() << endl;
	cout << endl;
	cout << "от указателя Персона на объект класса Персона" << endl;
	cout << PersoneFor7Uk2->WhoIs() << endl;
	cout << endl;
	cout << "от указателя Учитель на объект класса Учитель" << endl;
	cout << TeacherFor7Uk->WhoIs() << endl;
	*/

	/*
	Mark MarkFor11_1[5], MarkFor11_2[2][2];

	MarkFor11_1[0] = 10;
	MarkFor11_1[1] = 20;
	MarkFor11_1[2] = 30;
	MarkFor11_1[3] = 40;
	MarkFor11_1[4] = 50;

	MarkFor11_2[0][0] = 60;
	MarkFor11_2[0][1] = 70;
	MarkFor11_2[1][0] = 80;
	MarkFor11_2[1][1] = 90;

	cout << "Одномерный массив: " << endl;
	for (i = 0; i < 5; i++)
		MarkFor11_1[i].OutputMark();

	cout << endl;
	cout << "Двумерный массив: " << endl;
	for ( i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			MarkFor11_2[i][j].OutputMark();

	Teacher Teachers[3];
	Teachers[0].Set("Попова", "Ирина", "Андреевна");
	Teachers[1].Set("Иванова", "Елена", "Сергеевна");
	Teachers[2].Set("Буянов", "Виталий", "Юрьевич");

	Discipline Disciplines[3];
	Disciplines[0].SetName("Программирование");
	Disciplines[1].SetName("Математика");
	Disciplines[2].SetName("Экономика");

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
	
	Group Groups[3];
	Groups[0].SetGroup("ПИ-01");
	Groups[0].SetGroup("ПИ-02");
	Groups[0].SetGroup("ПИ-03");

	for (i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			Groups[i].AddStudentToGroup(Students[j]);
		}
	}

	cout << ("Лабораторная работа №9") << endl;
	cout << ("2) Продемонстрировать вызов всех конструкторов. Для C++ дополнительно вызов всех конструкторов статическими и динамическими объектами;") << endl;

	Teacher Teacher1;
	Teacher Teacher2("Паровозов");
	Teacher Teacher3("Лапенко", "Сергей", "Васильевич");
	Teacher* TeacherUk1 = new Teacher();
	Teacher* TeacherUk2 = new Teacher("Сталин");
	Teacher* TeacherUk3 = new Teacher("Жмышенко", "Василий", "Витальевич");

	Teacher1.OutputTeacher();
	cout << endl;
	Teacher2.OutputTeacher();
	cout << endl;
	Teacher3.OutputTeacher();
	cout << endl;
	TeacherUk1->OutputTeacher();
	cout << endl;
	TeacherUk2->OutputTeacher();
	cout << endl;
	TeacherUk3->OutputTeacher();
	cout << "\n\n" << endl;

	Discipline Discipline1;
	Discipline Discipline2("Культура речи");
	Discipline Discipline3("Культура речи", Teachers[0]);
	Discipline* DisciplineUk1 = new Discipline();
	Discipline* DisciplineUk2 = new Discipline("Бориков");
	Discipline* DisciplineUk3 = new Discipline("Химия", *TeacherUk3);

	DisciplineUk1->OutputDiscipline();
	cout << endl;
	DisciplineUk2->OutputDiscipline();
	cout << endl;
	DisciplineUk3->OutputDiscipline();
	cout << endl;
	Discipline1.OutputDiscipline();
	cout << endl;
	Discipline2.OutputDiscipline();
	cout << endl;
	Discipline3.OutputDiscipline();
	cout << "\n\n" << endl;

	Mark Mark1;
	Mark Mark2(95);
	Mark* MarkUk1 = new Mark();
	Mark* MarkUk2 = new Mark(65);

	Mark1.OutputMark();
	cout << endl;
	Mark2.OutputMark();
	cout << endl;
	MarkUk1->OutputMark();
	cout << endl;
	MarkUk2->OutputMark();
	cout << "\n\n" << endl;

	Student Student1;
	Student Student2("Пельмешин");
	Student Student3("Горин", "Гарри", "Юрьевич", Marks3, 3, Disciplines, 3);
	Student* StudentUk1 = new Student();
	Student* StudentUk2 = new Student("Лупин");
	Student* StudentUk3 = new Student("Пупин", "Андрей", "Васильевич", Marks2, 3, Disciplines, 3);

	Student1.OutputStudent();
	cout << endl;
	Student2.OutputStudent();
	cout << endl;
	Student3.OutputStudent();
	cout << endl;
	StudentUk1->OutputStudent();
	cout << endl;
	StudentUk2->OutputStudent();
	cout << endl;
	StudentUk3->OutputStudent();
	cout << "\n\n" << endl;

	Group Group1;
	Group Group2("Эконом-54");
	Group Group3("ИнБиоХим-22", Students, 3);
	Group* GroupUk1 = new Group();
	Group* GroupUk2 = new Group("ПИ-02");
	Group* GroupUk3 = new Group("ПИ-03", Students, 3);

	Group1.OutputGroup();
	cout << endl;
	Group2.OutputGroup();
	cout << endl;
	Group3.OutputGroup();
	cout << endl;
	GroupUk1->OutputGroup();
	cout << endl;
	GroupUk2->OutputGroup();
	cout << endl;
	GroupUk3->OutputGroup();
	cout << "\n\n" << endl;

	cout << ("3) Инициализировать небольшой массив конструктором с одним параметром;") << endl;
	Teacher teacherArr[3];
	for (int j = 0; j < 3; j++)
		teacherArr[j] = Teacher("Иванов" + to_string(j + 1));
	cout << ("Инициализировать небольшой массив конструктором с одним параметром:") << endl;
	for (int j = 0; j < 3; j++)
		teacherArr[j].OutputTeacher();
	cout << ("\n\n") << endl;

	Mark mark1;
	cout << "Лабораторная 10\n" << endl;
	cout << "Введите балл - число в пределах от 1 до 100!\n" << endl;
	while (mark1.Get() == 0)
	{
		mark1.InputMark();
	}
	cout << "Введенная оценка: " << mark1.Get() << endl;
	*/
}
