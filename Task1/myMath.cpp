#include "myMath.h"

myMath::myMath(int num1, int num2)
{
	_number1 = num1;
	_number2 = num2;
}

int myMath::add()
{
	return _number1 + _number2;
}

int myMath::subtraction()
{
	return _number1 - _number2;
}

int myMath::division()
{
	return _number1 / _number2;
}

int myMath::multiplication()
{
	return _number1 * _number2;
}

int myMath::pow()
{
	if (_number2 == 0)
		return 1;

	int result{ _number1 };
	for (int i = 1; i < _number2; i++)
	{
		result *= _number1;
	}
	return result;
}
