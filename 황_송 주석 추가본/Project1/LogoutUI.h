#pragma once

#include "Member.h"
#include "Logout.h"
#include <iostream>
#include <string>
using namespace std;
// 로그아웃 바운더리 클래스
class LogoutUI
{
public:
	// 로그아웃 기능
	void selectLogout(FILE* out_fp, Member* LoginedMember, Logout logout);

};

