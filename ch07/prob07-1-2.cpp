#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo
{
private:
	char* name;
	int age;
public:
	MyFriendInfo(const char* myname, int myage)
		: age(myage)
	{
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}
	~MyFriendInfo()
	{
		cout << "~MyFriendInfo() : " << name << endl;
		delete[] name;
	}
	void ShowMyFriendInfo()
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
	char* addr;
	char* phone;
public:
	MyFriendDetailInfo(const char* myname, int myage, const char* myaddr, const char* myphone)
		:MyFriendInfo(myname, myage)
	{
		addr = new char[strlen(myaddr) + 1];
		phone = new char[strlen(myphone) + 1];
		strcpy(addr, myaddr);
		strcpy(phone, myphone);
	}
	~MyFriendDetailInfo()
	{
		cout << "~MyFriendDetailInfo() : "<< phone << endl;
		delete[] addr;
		delete[] phone;
	}
	void ShowFriendDetailInfo()
	{
		ShowMyFriendInfo();
		cout << "주소: " << addr << endl;
		cout << "전화: " << phone << endl << endl;
	}
};

int main(void)
{
	MyFriendDetailInfo mfdi("권오현", 29, "장안구 천천동", "010-6644-6482");
	mfdi.ShowFriendDetailInfo();
	MyFriendDetailInfo mfdi2("홍길동", 29, "서울시 강남구", "010-1111-1111");
	mfdi2.ShowFriendDetailInfo();
	return 0;
}


