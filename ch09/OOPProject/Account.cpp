/*
 * �����̸� : Account.cpp
 * �ۼ��� : �ǿ���
 * ������Ʈ ����: [2020, 06, 21] ���Ϲ��� 0.7
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
	cout << "����ID: " << accID << endl;
	cout << "�� ��: " << cusName << endl;
	cout << "�� ��: " << balance << endl;
}
Account::~Account()
{
	delete[] cusName;
}