#include "Member.h"
#include <iostream>
#include <string>
using namespace std;

// get �Լ�
string Member::getID() {
	return this->ID;
}
string Member::getPW() {
	return this->PW;
}
int Member::getUsertype() {
	return this->User_type;
}

/*
	�Լ� �̸� : Member::loginMember()
	���	  : �α��� �ϱ�,�Ű������� ���� ���̵� ����� ������ true
	���� ���� : ID, PW
	��ȯ��    : ��� Bool True False
*/
bool Member::loginMember(string _ID, string _PW) {
	if (this->ID == _ID && this->PW == _PW) {
		return true;
	}
	else {
		return false;
	}
}
/*
	�Լ� �̸� : Member::logoutMember()
	���	  : �α׾ƿ�, �ش� ID ���
	���� ���� :
	��ȯ��    : ID
*/
string Member::logoutMember() {
	return this->ID;
}