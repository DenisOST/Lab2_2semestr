#include "Mark.h"

Mark::Mark()
{
	Number = 0;
}

Mark::Mark(int M)
{
	Number = M;
}

Mark::~Mark()
{

}

int Mark::Get()
{
	return Number;
}

void Mark::GetMarkLink(int& number)
{
	number = Number;
}

void Mark::GetMarkPointer(int* number)
{
	*number = Number;
}

void Mark::Set(int M)
{
	Number = M;
}

void Mark::InputMark()
{
	this->Set(0);
	cout << "Введите балл: ";
	cin >> Number;
}

void Mark::OutputMark()
{
	cout << "Балл: " << Number << endl;
}

// Добавление элемента в конец списка
void Mark::Add()
{
	if (last_mark == NULL)
		this->prev = NULL;
	else
	{
		last_mark->next = this;
		prev = last_mark;
	}
	last_mark = this;
	this->next = NULL;
}

// Вывод на дисплей содержимого списка
void Mark::Reprint(void)
{
	Mark* uk;   // Вспомогательный указатель
	uk = last_mark;
	if (uk == NULL)
	{
		cout << "Список пуст!";
		return;
	}
	else
		cout << "\nСодержимое списка:\n";

	// Цикл печати в обратном порядке значений элементов списка:
	while (uk != NULL)
	{
		cout << uk->Number << '\t';
		uk = uk->prev;
	}
}

// Создание нового списка
void Mark::NewList()
{
	last_mark = NULL;
}

Mark operator+(const Mark& mark, int number)
{
	if (mark.Number + number > 100)
		return mark;
	else {
		Mark temp;
		temp.Set(mark.Number + number);
		return temp;
	}
}

Mark& Mark::operator++()
{
	Number += 1;
	return *this;
}

Mark Mark::operator++ (int)
{
	Mark temp = *this;
	++(*this);
	return temp;
}