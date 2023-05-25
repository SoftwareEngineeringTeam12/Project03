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
	// 해당 멤버가 무슨 멤버인지 알려주는 변수
	// 1이면 회사회원, 2이면 일반회원
	int User_type = 1;

public:
	// 생성자
	Member(string _ID, string _PW, int _User_type) :ID(_ID), PW(_PW), User_type(_User_type) {}
	// get 함수들
	string getID();
	string getPW();
	int getUsertype();
	// 로그인, 로그아웃 함수
	bool loginMember(string ID, string PW);
	string logoutMember();
	// default 생성자
	Member() = default;
};

