#pragma once
#include <string>

using namespace std;
// 회원 클래스 정의
class Member
{
private:
	// ID와 PW를 가지고 있음
	string ID;
	string PW;

public:
	// 생성자
	Member(string _ID, string _PW) :ID(_ID), PW(_PW) {}
	// get 함수들
	string getID();
	string getPW();
	// 로그인, 로그아웃 함수
	bool loginMember(string ID, string PW);
	string logoutMember();

	Member() = default;
};

