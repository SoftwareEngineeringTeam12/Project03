#pragma once

#include "Member.h"
#include "Logout.h"
/*
	함수 이름 : Logout::logoutMember()
	기능	  : 로그아웃 하기
	전달 인자 : 로그인 한 멤버의 포인터
	반환값    : 로그아웃 한 멤버의 id 스트링 반환
*/
string Logout::logoutMember(Member* LoginedMember) {
	// 해당 멤버의 logoutMember함수 호출
	string result = LoginedMember->logoutMember();
	return result;
}
