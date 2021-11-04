#include "Mark.h"

Mark::Mark()
{
	Number = 0;
}

Mark::~Mark()
{

}

int Mark::Get()
{
	return Number;
}

void Mark::Set(int M)
{
	Number = M;
}

void Mark::InputMark()
{
	this->Set(0);
	cout << "¬ведите балл: ";
	cin >> Number;
}

void Mark::OutputMark()
{
	cout << "Ѕалл: " << Number << endl;
}