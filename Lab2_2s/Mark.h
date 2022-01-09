#pragma once

#include "Teacher.h"

class Mark {
	int Number = 0;

	static Mark* last_mark; // Адрес последнего элемента списка
	Mark* prev; // На предыдущий элемент списка
	Mark* next; // На следующий элемент списка
public:
	Mark();

	~Mark();

	int Get();

	void GetMarkLink(int& number);
	void GetMarkPointer(int* number);

	void Set(int M);

	void InputMark();

	void OutputMark();

	void Add();
	static void Reprint();
	static void NewList();

	friend Mark operator+(const Mark &mark, int number);
	Mark& operator++();
	Mark operator++ (int);
};