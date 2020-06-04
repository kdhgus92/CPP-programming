#include <iostream>
using namespace std;

void AddOne(int& num)
{
	num++;
}

void ChangeVal(int& num)
{
	num *= -1;
}

int main(void)
{
	int val = 2;
	AddOne(val);
	cout << val << endl;

	ChangeVal(val);
	cout << val << endl;
	return 0;
}
