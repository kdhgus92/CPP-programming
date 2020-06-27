#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class String
{
private:
	char* str;
public:
	String() {
		//str = new char[1000];
		str = NULL;
	}
	String(const char* input)
	{
		str = new char[strlen(input)+1];
		strcpy(str, input);
		cout << "String(const char* input)" << endl;
	}
	String(const String& ref)
	{
		str = new char[strlen(ref.str)+1];
		strcpy(str, ref.str);
	}
	String operator+(const String& ref)
	{
		int len = strlen(str) + strlen(ref.str) - 1;
		cout << len << endl;
		char* str1 = new char[1000];
		strcpy(str1, str);
		strcat(str1, ref.str);

		//cout << sizeof(*str1) << endl;

		String obj(str1);
		cout << "check point operator+" << endl;

		delete[] str1;  //

		return obj;
	}
	String& operator+=(String& ref)
	{
		int len = strlen(str) + strlen(ref.str) -1;
		char* str1 = new char[1000];
		strcpy(str1, str);
		strcat(str1, ref.str);

		delete[] str;//
		str = str1;

		return *this;
	}
	String& operator=(const String& ref)
	{
		if (str != NULL)
			delete[] str;

		str = new char[strlen(ref.str)+1];
		strcpy(str, ref.str);
		return *this;
	}
	bool operator==(const String& ref)
	{
		cout << strlen(str) << " vs " << strlen(ref.str) << endl;
		if (strlen(str) == strlen(ref.str)) {
			for (int i = 0; i < strlen(str); i++){
				if (str[i] != ref.str[i])
					return false;	
			}
			return true;
		}
		else {
			return false;
		}
	}

	friend ostream& operator<<(ostream& os, String& ref);
	friend istream& operator>>(istream& is, String& ref);
	~String()
	{
		cout << "~String()" << endl;
		if (str != NULL)
			delete[] str;
	}
};

ostream& operator<<(ostream& os, String& ref)
{
	os << ref.str;
	return os;
}
istream& operator>>(istream& is, String& ref)
{
	
	char str[100];
	cout << "operator>>1" << endl;
	is >> str;
	cout << "operator>>2" << endl;
	ref = String(str);
	return is;
}


int main(void)
{
	String str1 = "I like ";
	String str2 = "string class";
	cout << "check" << endl;
	String str3 = str1 + str2;

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str1 += str2;
	cout << str1 << endl;
	if (str1 == str3)
		cout << "동일 문자열!" << endl;
	else
		cout << "동일하지 않은 문자열!" << endl;

	String str4;
	cout << "문자열 입력: ";
	cin >> str4;
	cout << "입력한 문자열: " << str4 << endl;

	return 0;
}
