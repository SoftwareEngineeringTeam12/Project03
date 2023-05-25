#pragma once
#include "SignUpUI.h"
#include "SignUp.h"
#include <iostream>
#include <string>

using namespace std;

/*
	�Լ� �̸� : SignUp::showNecessaryInfo()
	���	  : ȸ�� ���� �˷��ֱ�, ��� ����
	���� ���� : KindOfMember
	��ȯ��    : �ʿ��� ȸ�� ����
*/

string SignUp::showNecessaryInfo(int KindOfMember) {
	// ����� ���� �ٸ��� ��ȯ
	if (KindOfMember == 1) {
		return this->CMemberParams;
	}
	else if (KindOfMember == 2) {
		return this->GMemberParams;
	}
}

/*
	�Լ� �̸� : SignUp::addNewCMember()
	���	  : ȸ��ȸ�� ����
	���� ���� : ID, PW, CName, BNum
	��ȯ��    : ȸ��ȸ�� ������
*/
CompanyMember* SignUp::addNewCMember(string ID, string PW, string CName, string BNum, CompanyMember* Cmembers[], int* nextCMember) {
	// �����ڷ� ȸ��ȸ�� ����
	CompanyMember* newCompanyMember = new CompanyMember(ID, PW, CName, BNum);
	// �迭�� �߰�
	Cmembers[*nextCMember] = newCompanyMember;
	// �迭 �ε��� ++
	(*nextCMember)++;
	// �ش� ȸ�� ��ȯ
	return newCompanyMember;
}
/*
	�Լ� �̸� : SignUp::addNewGMember()
	���	  : ȸ��ȸ�� ����
	���� ���� : ID, PW, GName, RNum
	��ȯ��    : �Ϲ�ȸ�� ������
*/
GeneralMember* SignUp::addNewGMember(string ID, string PW, string GName, string RNum, GeneralMember* Gmembers[], int* nextGMember) {
	// �����ڷ� �Ϲ�ȸ�� ����
	GeneralMember* newGeneralMember = new GeneralMember(ID, PW, GName, RNum);
	// �迭�� �߰�
	Gmembers[*nextGMember] = newGeneralMember;
	// �迭 �ε��� ++
	(*nextGMember)++;
	// �ش� ȸ�� ��ȯ
	return newGeneralMember;
}
