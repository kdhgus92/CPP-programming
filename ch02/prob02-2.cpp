#include <iostream>
using namespace std;

int main(void)
{
	const int num = 12;
	const int* ptr = &num;
	const int* (&rptr) = ptr;

	cout << *ptr << endl;
	cout << *rptr << endl;
	
	return 0;
}
