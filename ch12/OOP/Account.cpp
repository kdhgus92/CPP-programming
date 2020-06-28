/*
 * 파일이름 : Account.cpp
 * 작성자 : 권오현
 * 업데이트 정보: [2020, 06, 28] 파일버전 0.9
*/
#include "BankingCommonDecl.h"
#include "Account.h"

Account::Account(int ID, int money, String name)
	:accID(ID), balance(money), cusName(name)
{ }
//Account::Account(const Account& copy)
//	: accID(copy.accID), balance(copy.balance), cusName(copy.cusName)
//{ }
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
//Account::~Account()
//{ }
//
//Account& Account::operator=(const Account& ref)
//{
//	accID = ref.accID;
//	balance = ref.balance;
//	cusName = ref.cusName;
//	return *this;
//}
