#pragma once
#include "Login.h"
#include <iostream>
#include <string>
using namespace std;
// 로그인 바운더리 클래스
class LoginUI
{
public:
	void startInterface(); // 출력 안함
	// 로그인 하기
	Member* selectLogin(FILE* in_fp, FILE* out_fp, Login login, CompanyMember* Cmembers[], int* nextCMember, GeneralMember* Gmembers[], int* nextGMember);

};

