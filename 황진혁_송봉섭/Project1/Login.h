#include <iostream>
#include <string>
#include "CompanyMember.h"
#include "GeneralMember.h"

// 로그인 컨트롤 클래스
class Login
{
public:
	// 로그인하기
	Member* loginMember(string ID, string PW, CompanyMember* Cmembers[], int* nextCMember, GeneralMember* Gmembers[], int* nextGMember);
};

