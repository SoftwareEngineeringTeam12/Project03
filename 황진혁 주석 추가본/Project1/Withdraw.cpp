#include "Withdraw.h"
#include <iostream>
#include <string>
using namespace std;
/*
	�Լ� �̸� : Withdraw::deleteMember()
	���	  : ȸ�� Ż��
	���� ���� : �α��ε� ��� ������
	��ȯ��    : Ż�� �� ID
*/
string Withdraw::deleteMember(Member* LoginedMember) {
	// ��� Ŭ������ ID�� ��������
	string result = LoginedMember->getID();
	// �Ҹ��ڷ� ȸ�� Ż��
	delete LoginedMember;
	// �ش� ID ��ȯ
	return result;
}
