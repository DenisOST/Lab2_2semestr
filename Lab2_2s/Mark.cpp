#include "Mark.h"

Mark Set(int M)
{
	Mark Number;
	Number.Number = M;

	return Number;
}

Mark InputMark()
{
	Mark Number;
	Number = Set(0);
	cout << "������� ����: ";
	cin >> Number.Number;

	return Number;
}

void OutputMark(Mark M)
{
	cout << "����: " << M.Number << endl;
}