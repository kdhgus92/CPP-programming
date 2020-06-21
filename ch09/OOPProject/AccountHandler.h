/*
 * �����̸� : AccountHandler.h
 * �ۼ��� : �ǿ���
 * ������Ʈ ����: [2020, 06, 21] ���Ϲ��� 0.7
*/
#ifndef __ACCOUNT_HANDLER_H__
#define __ACCOUNT_HANDLER_H__
#include "BankingCommonDecl.h"
#include "Account.h"

class AccountHandler
{
private:
	Account* accArr[100];
	int accNum = 0;

public:
	AccountHandler();
	void ShowMenu(void);
	void MakeAccount(void);
	void DepositMoney(void);
	void WithdrawMoney(void);
	void ShowAllAccInfo(void);
	~AccountHandler();

protected:
	void MakeNormalAccount(void);
	void MakeCreditAccount(void);
};

#endif