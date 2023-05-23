#include "Withdraw.h"
#include <iostream>
#include <string>
using namespace std;
/*
	함수 이름 : Withdraw::deleteMember()
	기능	  : 회원 탈퇴, 해당 아이디 출력하고 로그아웃 처리를 위해 -1로 리턴하기
	전달 인자 : 로그인된 멤버 포인터
	반환값    : ID
*/
string Withdraw::deleteMember(Member* LoginedMember) {
	string result = LoginedMember->getID();
	// 소멸자
	delete LoginedMember;
	// 해당 ID 반환
	return result;
}
