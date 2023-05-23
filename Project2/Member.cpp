#include "Member.h"
#include <iostream>
#include <string>
using namespace std;

// get 함수
string Member::getID() {
	return this->ID;
}
string Member::getPW() {
	return this->PW;
}
/*
	함수 이름 : Member::loginMember()
	기능	  : 로그인 하기,매개변수로 들어온 아이디 비번이 같으면 true
	전달 인자 : ID, PW
	반환값    : 결과 Bool True False
*/
bool Member::loginMember(string _ID, string _PW) {
	if (getID() == _ID && getPW() == _PW) {
		return true;
	}
	else {
		return false;
	}
}
/*
	함수 이름 : Member::logoutMember()
	기능	  : 로그아웃, 해당 ID 출력
	전달 인자 :
	반환값    : ID
*/
string Member::logoutMember() {
	return this->getID();
}