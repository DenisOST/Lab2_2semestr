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
	cout << "������� ����: ";
	cin >> Number;
}

void Mark::OutputMark()
{
	cout << "����: " << Number << endl;
}

// ���������� �������� � ����� ������
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

// ����� �� ������� ����������� ������
void Mark::Reprint(void)
{
	Mark* uk;   // ��������������� ���������
	uk = last_mark;
	if (uk == NULL)
	{
		cout << "������ ����!";
		return;
	}
	else
		cout << "\n���������� ������:\n";

	// ���� ������ � �������� ������� �������� ��������� ������:
	while (uk != NULL)
	{
		cout << uk->Number << '\t';
		uk = uk->prev;
	}
}

// �������� ������ ������
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