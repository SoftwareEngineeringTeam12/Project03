#pragma once

#include "Member.h"
#include "Logout.h"
/*
	�Լ� �̸� : Logout::logoutMember()
	���	  : �α׾ƿ� �ϱ�
	���� ���� : �α��� �� ����� ������
	��ȯ��    : ��� �� -1�� return
*/
string Logout::logoutMember(Member* LoginedMember){
	// �ش� ����� logoutMember�Լ� ȣ��
	string result = LoginedMember->logoutMember();
	return result;
}
