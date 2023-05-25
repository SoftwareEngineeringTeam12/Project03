#include "Withdraw.h"
#include <iostream>
#include <string>
using namespace std;
/*
	함수 이름 : Withdraw::deleteMember()
	기능	  : 회원 탈퇴
	전달 인자 : 로그인된 멤버 포인터
	반환값    : 탈퇴 한 ID
*/
string Withdraw::deleteMember(Member* LoginedMember) {
	// 멤버 클래스의 ID를 가져오기
	string result = LoginedMember->getID();
	// 소멸자로 회원 탈퇴
	delete LoginedMember;
	// 해당 ID 반환
	return result;
}
