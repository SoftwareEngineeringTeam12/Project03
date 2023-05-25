#include "Member.h"
#include <iostream>
#include <string>
#include "WithdrawUI.h"
#define MAX_STRING 32
/*
	함수 이름 : WithdrawUI::withdrawMember()
	기능	  : 회원 탈퇴, 컨트롤 클래스의 deletemember 호출, 탈퇴한 아이디 출력
	전달 인자 : output 포인터, 로그인된 멤버 포인터, 컨트롤 객체
	반환값    : 없음
*/
void WithdrawUI::withdrawMember(FILE* out_fp, Member* LoginedMember, Withdraw withdraw) {
	// 컨트롤의 함수 호출하여 탈퇴한 ID 받기
	string result = withdraw.deleteMember(LoginedMember);
	// 스트링을 char형으로 변경
	char stl[MAX_STRING];
	strcpy_s(stl, result.c_str());
	// 파일에 출력
	fprintf(out_fp, "1.2. 회원탈퇴\n");
	fprintf(out_fp, "> %s\n\n", stl);

}
