#include "Mark.h"
#include <string>

Mark::Mark()
{
	Number = 0;
}

Mark::Mark(int M)
{
	Number = 0;
	if (IsRightMark(M))
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
	Number = 0;
	if (IsRightMark(M))
		Number = M;
}

void Mark::InputMark()
{
	string mark;
	cout << "Введите балл: ";
	cin >> mark;

	try // ищем исключения внутри этого блока и отправляем их в соответствующий обработчик catch
	{
		for (int i = 0; i < mark.length(); i++)
		{
			if ((mark[i] < '0') || (mark[i] > '9'))
				throw "It string is not number!"; // выбрасывается исключение типа const char*
		}
		Set(stoi(mark));
	}
	catch (const char* exception) // обработчик исключений типа const char*
	{
		std::cerr << "Error: " << exception << '\n';
		//std::cerr << "Error: " << "It string is not number!" << '\n';
	}
	cout << endl;

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

// Проверка числа на подходящее для оценки

bool Mark::IsRightMark(int mark)
{
	bool res = true;
	try // ищем исключения внутри этого блока и отправляем их в соответствующий обработчик catch
	{
		if (mark < 0 || mark > 100) // Если пользователь ввел неверное число, то выбрасывается исключение
			throw "Incorrect value."; // выбрасывается исключение типа const char*
	}
	catch (const char* exception) // обработчик исключений типа const char*
	{
		std::cerr << "Error: " << exception << '\n';
		res = false;
		return res;
	}
	return res;
}