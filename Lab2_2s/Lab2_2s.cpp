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

	Mark mark1;
	cout << "Лабораторная работа №10\n" << endl;
	cout << "Введите балл - число в пределах от 1 до 100!\n" << endl;
	while (mark1.Get() == 0)
	{
		mark1.InputMark();
	}
	cout << "Введенная оценка: " << mark1.Get() << endl;
	cout << endl;

	/*
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

	cout << ("4) Для С++ создать конструктор копии и перегрузку оператора присваивания. Продемонстрировать различие между мелким и глубоким копированием:") << endl;
	Student MasStudForCopy[2];
	MasStudForCopy[0] = Student(Students[0]);
	MasStudForCopy[1] = Student(Students[1]);
	Discipline DisciplineForCopy1 = Discipline("Математика", Teachers[0]), DisciplineForCopy2 = Discipline("Обществознание", Teachers[1]);
	Group GroupForCopy1 = Group("ПИЭ-92", Students, 3), GroupForCopy2 = Group("ПИ-02", Students, 3);
	cout << ("") << endl;
	DisciplineForCopy1 = DisciplineForCopy2;
	cout << ("Поверхностная копия 1-го объекта во 2-ой для класса \'УРОК\':") << endl;
	cout << ("") << endl;
	DisciplineForCopy1.OutputDiscipline();
	cout << ("") << endl;
	DisciplineForCopy2.OutputDiscipline();
	cout << ("") << endl;
	cout << ("Изменение 1-го объекта, а 2-ой не трогается:") << endl;
	DisciplineForCopy1.Set("Биология", Teachers[0]);
	cout << ("") << endl;
	DisciplineForCopy1.OutputDiscipline();
	cout << ("") << endl;
	DisciplineForCopy2.OutputDiscipline();
	cout << ("") << endl;
	GroupForCopy1.Set("ГК-02", Students, 3);
	GroupForCopy2 = GroupForCopy1;
	cout << ("Глубокая копия 1-го объекта во 2-ой для класса \'МОЙ КЛАСС\' с помощью перегрузки оператора \'=\':") << endl;
	cout << ("") << endl;
	GroupForCopy1.OutputGroup();
	cout << ("") << endl;
	GroupForCopy2.OutputGroup();
	cout << ("") << endl;
	cout << ("Изменение 1-го объекта, а 2-ой не трогается:") << endl;
	Student StudentForTest[3];
	StudentForTest[0].SetStudent("Путин", "Владимир", "Владимирович");
	StudentForTest[1].SetStudent("Медведев", "Дмитрий", "Анатольевич");
	StudentForTest[2].SetStudent("Мишустин", "Михаил", "Владимирович");
	GroupForCopy1.Set("ИнБиоХим-31", StudentForTest, 3);
	cout << ("") << endl;
	GroupForCopy1.OutputGroup();
	cout << ("") << endl;
	GroupForCopy2.OutputGroup();
	cout << ("\n\n") << endl;
	/*
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
	
	cout << "Модифицировать ваши проекты на С++, C# и Java путем добавления в один из классов как минимум одного статического поля и одного статического метода." << endl;
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
	*/
}
