#ifndef __HEADER_H__
#define __HEADER_H__

#include <iostream>
using namespace std;

class Printer
{
private:
	char charArr[100];
public:
	void SetString(const char* str);
	void ShowString(void);
};

#endif
