/*
 * 파일이름 : Account.cpp
 * 작성자 : 권오현
 * 업데이트 정보: [2020, 06, 21] 파일버전 0.7
*/
#include "BankingCommonDecl.h"
#include "Account.h"

Account::Account(int ID, int money, char* name)
	:accID(ID), balance(money)
{
	cusName = new char[strlen(name) + 1];
	strcpy(cusName, name);
}
Account::Account(const Account& copy)
	: accID(copy.accID), balance(copy.balance)
{
	cusName = new char[strlen(copy.cusName) + 1];
	strcpy(cusName, copy.cusName);
}
int Account::GetAccID() const
{
	return accID;
}
void Account::Deposit(int money)
{
	balance += money;
}
int Account::Withdraw(int money)
{
	if (balance < money)
		return 0;

	balance -= money;
	return money;
}
void Account::ShowAccInfo() const
{
	cout << "계좌ID: " << accID << endl;
	cout << "이 름: " << cusName << endl;
	cout << "잔 액: " << balance << endl;
}
Account::~Account()
{
	delete[] cusName;
}