#ifndef __HEADER_H__
#define __HEADER_H__

#include <iostream>
using namespace std;

class Calculator
{
private:
	int AddCount;
	int MinCount;
	int MulCount;
	int DivCount;
public:
	void Init();
	double Add(double num1, double num2);
	double Min(double num1, double num2);
	double Mul(double num1, double num2);
	double Div(double num1, double num2);
	void ShowOpCount(void);
};

#endif
