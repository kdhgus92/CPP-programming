#include <iostream>
#include <cstring>
#include "header.h"
//#include "Printer.h"
using namespace std;

void Printer::SetString(const char* str)
{
	strcpy(charArr, str);
}

void Printer::ShowString(void)
{
	cout << charArr << endl;
}
