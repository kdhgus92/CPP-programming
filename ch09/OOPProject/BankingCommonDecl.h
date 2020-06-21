/*
 * 파일이름 : BankingCommonDecl.h
 * 작성자 : 권오현
 * 업데이트 정보: [2020, 06, 21] 파일버전 0.7
*/

#ifndef __BANKING_COMMON_H__
#define __BANKING_COMMON_H__
#include <iostream>
#include <cstring>

using namespace std;

const int NAME_LEN = 20;

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIER, EXIT };
enum { LEVEL_A = 7, LEVEL_B = 4, LEVEL_C = 2 };
enum { NORMAL = 1, CREDIT = 2 };

#endif
