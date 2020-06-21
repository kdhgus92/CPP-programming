/*
 * �����̸� : HighCreditAccount.h
 * �ۼ��� : �ǿ���
 * ������Ʈ ����: [2020, 06, 21] ���Ϲ��� 0.7
*/
#ifndef __HIGHCREDITACCOUNT_H__
#define __HIGHCREDITACCOUNT_H__
#include "NormalAccount.h"

class HighCreditAccount : public NormalAccount
{
private:
	int specialRate;
public:
	HighCreditAccount(int ID, int money, char* name, int inter, int cred);
	virtual void Deposit(int money);
	virtual void ShowAccInfo() const;

};

HighCreditAccount::HighCreditAccount(int ID, int money, char* name, int inter, int special)
	: NormalAccount(ID, money, name, inter), specialRate(special)
{}
void HighCreditAccount::Deposit(int money)
{
	NormalAccount::Deposit(money);
	Account::Deposit(money * (specialRate / 100.0));
}
void HighCreditAccount::ShowAccInfo() const
{
	NormalAccount::ShowAccInfo();
	cout << "�߰�������: " << specialRate << "%" << endl;
}

#endif