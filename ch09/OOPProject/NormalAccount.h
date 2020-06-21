/*
 * �����̸� : NormalAccount.h
 * �ۼ��� : �ǿ���
 * ������Ʈ ����: [2020, 06, 21] ���Ϲ��� 0.7
*/

#ifndef __NORMALACCOUNT_H__
#define __NORMALACCOUNT_H__

#include "BankingCommonDecl.h"
#include "Account.h"

class NormalAccount : public Account
{
private:
	int interRate;
public:
	NormalAccount(int ID, int money, char* name, int ir);
	void AddInterestRatio(int ratio);
	virtual void Deposit(int money);
	virtual void ShowAccInfo() const;
};

NormalAccount::NormalAccount(int ID, int money, char* name, int ir)
	:Account(ID, money, name), interRate(ir)
{}
void NormalAccount::AddInterestRatio(int ratio)
{
	interRate += ratio;
}
void NormalAccount::Deposit(int money)
{
	Account::Deposit(money);
	Account::Deposit(money * (interRate / 100.0));
}
void NormalAccount::ShowAccInfo() const
{
	Account::ShowAccInfo();
	cout << "������: " << interRate << "%" << endl;
}

#endif