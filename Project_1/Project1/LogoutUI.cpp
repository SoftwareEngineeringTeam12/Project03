#pragma once
#include "Logout.h"
#include "LogoutUI.h"
#define MAX_STRING 32

/*
	함수 이름 : LogoutUI::selectLogout()
	기능	  : 로그아웃 하기
	전달 인자 : output 포인터, 로그인 한 멤버의 포인터, 로그아웃 컨트롤 객체
	반환값    : 
*/
void LogoutUI::selectLogout(FILE* out_fp, Member* LoginedMember, Logout logout) {
	string result = logout.logoutMember(LoginedMember);
	char stl[MAX_STRING];
	strcpy_s(stl, result.c_str());
	fprintf(out_fp, "2. 2. 로그아웃\n");
	fprintf(out_fp, "> %s\n\n", stl);

}
