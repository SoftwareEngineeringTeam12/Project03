#pragma once

#include "Member.h"
#include <iostream>
#include <string>
using namespace std;
// 로그아웃 컨트롤 클래스
class Logout
{
public:
	// 로그아웃하기
	string logoutMember(Member* LoginedMember);
};

