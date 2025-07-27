#ifndef MY_MATH_H
#define MY_MATH_H

class myMath
{
public:
	myMath(int num1, int num2);

	int add();
	int subtraction();
	int division();
	int multiplication();
	int pow();

private:
	int _number1;
	int _number2;
};
#endif // !MY_MATH_H
