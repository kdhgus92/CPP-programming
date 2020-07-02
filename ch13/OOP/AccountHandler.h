/*
 * 파일이름 : AccountHandler.h
 * 작성자 : 권오현
 * 업데이트 정보: [2020, 07, 02] 파일버전 0.8
*/
#ifndef __ACCOUNT_HANDLER_H__
#define __ACCOUNT_HANDLER_H__
#include "BankingCommonDecl.h"
#include "Account.h"
#include "BoundCheckArray.h"

class AccountHandler
{
private:
	BoundCheckArray<Account*> accArr; //변경
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
