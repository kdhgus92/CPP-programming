#include <iostream>

void swap(int* pnum1, int* pnum2) {
	int temp;
	temp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = temp;
}

void swap(char* pch1, char* pch2) {
	char temp;
	temp = *pch1;
	*pch1 = *pch2;
	*pch2 = temp;
}

void swap(double* pdbl1, double* pdbl2) {
	double temp;
	temp = *pdbl1;
	*pdbl1 = *pdbl2;
	*pdbl2 = temp;
}

int main(void) {
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;
}
