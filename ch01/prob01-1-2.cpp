#include <iostream>

int main(void) {
	char name[100];
	char phoneNum[100];

	std::cout << "이름: ";
	std::cin >> name;

	std::cout << "번호: ";
	std::cin >> phoneNum;

	std::cout << "이름은 " << name << ", 번호는 " << phoneNum << "입니다.";
	return 0;
}
