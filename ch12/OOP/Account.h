/*
 * 파일이름 : Account.h
 * 작성자 : 권오현
 * 업데이트 정보: [2020, 06, 26] 파일버전 0.8
*/
//#define _CRT_SECURE_NO_WARNINGS

#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__
#include "String.h"

class Account
{
private:
	int accID;
	int balance;
	String cusName;
public:
	Account(int ID, int money, String name);
	//Account(const Account& copy);

	int GetAccID() const;
	virtual void Deposit(int money);
	int Withdraw(int money);
	virtual void ShowAccInfo() const;
	//virtual ~Account();
	//Account& operator=(const Account& ref);
};

#endif

