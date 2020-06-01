#include <iostream>

int main(void) {
	double pct = 0.12;
	int salary = 50;
	int pan = 0;
	int tot;

	do {
		std::cout << "판매 금액을 만원단위로 입력(-1 to end): ";
		std::cin >> pan;
		if (pan == -1) {
			std::cout << "프로그램을 종료합니다.";
			break;
		}
		std::cout << "이번달 급여: " << salary + pan * pct 
			<< "만원"<<std::endl;
	} while (1);
	return 0;
}
