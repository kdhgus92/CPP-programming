/*
 * 파일이름 : NormalAccount.h
 * 작성자 : 권오현
 * 업데이트 정보: [2020, 06, 21] 파일버전 0.7
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
	NormalAccount(int ID, int money, String name, int ir);
	void AddInterestRatio(int ratio);
	virtual void Deposit(int money);
	virtual void ShowAccInfo() const;
};

NormalAccount::NormalAccount(int ID, int money, String name, int ir)
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
	cout << "이자율: " << interRate << "%" << endl;
}

#endif
