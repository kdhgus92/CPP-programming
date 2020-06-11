#include <iostream>
using namespace std;

namespace COMP_POS
{
	enum { CLERK, SENIOR, ASSIST, MANAGER };

	void ShowPositionInfo(int pos)
	{
		switch (pos)
		{
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
		}
	}
}

class NameCard
{
private:
	char* name;
	char* comName;
	char* phoneNum;
	int level;
	
public:
	NameCard(const char* myname, const char* mycomName, const char* myphoneNum, int mylevel)
	{
		int len = strlen(myname)+1;
		name = new char[len];
		strcpy(name, myname);
		//cout << "초기화1" << endl;

		len = strlen(mycomName) + 1;
		comName = new char[len];
		strcpy(comName, mycomName);

		len = strlen(myphoneNum) + 1;
		phoneNum = new char[len];
		strcpy(phoneNum, myphoneNum);

		level = mylevel;
	}

	void ShowNameCardInfo()
	{
		cout << "이름: " << name << endl;
		cout << "회사: " << comName << endl;
		cout << "전화번호: " << phoneNum << endl;
		cout << "직급: "; COMP_POS::ShowPositionInfo(level);
		cout << endl;
	}

	~NameCard()
	{
		delete[] name;
		delete[] comName;
		delete[] phoneNum;
	}
};

int main(void)
{
	//cout << "main:시작" << endl;
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}
