#pragma once
#include "CompanyMember.h"
#include <iostream>
#include <string>
#include "FindRecruit.h"



/*
	�Լ� �̸� : FindRecruit::showRecruitByCName()
	���	  : ä�� ���� �˻�
	���� ���� : ȸ����� ������, ȸ��ȸ���� �����͹迭, ȸ��ȸ���� ȸ����
	��ȯ��    : ȸ���� ��ġ�ϴ� ä�� ���� string
*/


string FindRecruit::showRecruitByCName(char* CName, CompanyMember* Cmembers[], int nextCMember) {

	string str(CName);
	string result = "";

	for (int i = 0; i < nextCMember; i++)
	{
		if (Cmembers[i]->getMyRecruitCName() == str) {

			result += Cmembers[i]->getMyRecruitDetails() + "\n";
		}

	}

	return result;

}