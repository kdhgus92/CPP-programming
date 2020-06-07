#include <iostream>
#include <cstring>
#include "header.h"
//#include "Calculator.h"
using namespace std;

void Calculator::Init(void)
{
	AddCount = 0;
	MinCount = 0;
	MulCount = 0;
	DivCount = 0;
}

double Calculator::Add(double num1, double num2)
{
	AddCount++;
	return num1 + num2;
}

double Calculator::Min(double num1, double num2)
{
	MinCount++;
	return num1 - num2;
}

double Calculator::Mul(double num1, double num2)
{
	MulCount++;
	return num1 * num2;
}

double Calculator::Div(double num1, double num2)
{
	DivCount++;
	return num1 / num2;
}

void Calculator::ShowOpCount(void)
{
	cout << "덧셈: " << AddCount << " 뺄셈: " << MinCount 
		<< " 곱셈: " << MulCount << " 나눗셈: " << DivCount << endl;
}
