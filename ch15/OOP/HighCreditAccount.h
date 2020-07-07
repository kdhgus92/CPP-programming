/*
 * 파일이름 : HighCreditAccount.h
 * 작성자 : 권오현
 * 업데이트 정보: [2020, 07, 07] 파일버전 0.82
*/
#ifndef __HIGHCREDITACCOUNT_H__
#define __HIGHCREDITACCOUNT_H__
#include "NormalAccount.h"
#include "String.h"

class HighCreditAccount : public NormalAccount
{
private:
	int specialRate;
public:
	HighCreditAccount(int ID, int money, String name, int inter, int cred);
	virtual void Deposit(int money);
	virtual void ShowAccInfo() const;

};

HighCreditAccount::HighCreditAccount(int ID, int money, String name, int inter, int special)
	: NormalAccount(ID, money, name, inter), specialRate(special)
{}
void HighCreditAccount::Deposit(int money)
{
	if (money < 0)
		throw MinusException(money);

	NormalAccount::Deposit(money);
	Account::Deposit(money * (specialRate / 100.0));
}
void HighCreditAccount::ShowAccInfo() const
{
	NormalAccount::ShowAccInfo();
	cout << "추가이자율: " << specialRate << "%" << endl;
}

#endif
