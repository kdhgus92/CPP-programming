#include<iostream>

int main(void)
{
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		int val = 0;
		std::cout << i+1 << "번째 정수 입력: ";
		std::cin >> val;
		sum += val;
	}
	std::cout << "합계: " << sum;

	return 0;
}
