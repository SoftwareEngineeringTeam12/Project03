#include "Member.h"
#include <iostream>
#include <string>
#include "WithdrawUI.h"
#define MAX_STRING 32
/*
	함수 이름 : WithdrawUI::withdrawMember()
	기능	  : 회원 탈퇴, 컨트롤 클래스의 deletemember 호출
	전달 인자 : 로그인된 멤버 포인터
	반환값    : -1
*/
void WithdrawUI::withdrawMember(FILE* out_fp, Member* LoginedMember, Withdraw withdraw) {
	string result = withdraw.deleteMember(LoginedMember);
	char stl[MAX_STRING];
	strcpy_s(stl, result.c_str());
	fprintf(out_fp, "1. 2. 회원탈퇴\n");
	fprintf(out_fp, "> %s\n\n", stl);

}
