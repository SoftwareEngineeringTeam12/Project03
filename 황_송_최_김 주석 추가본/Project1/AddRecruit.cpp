#pragma once

#include "AddRecruit.h"
using namespace std;
#include <iostream>
AddRecruit::AddRecruit() {}

void AddRecruit::showRegisterRecruit() {

}

/*
	�Լ� �̸� : AddRecruit::AddNewRecruit()
	���	  : ä�� ���� ���
	���� ���� : ���� , ���� �ο��� , �������� , �α��ε� ��� ������
	��ȯ��    :
*/
void AddRecruit::AddNewRecruit(string job, string NumberOfApplicants, string Deadline, Member* loginedMember) {

	CompanyMember* companyMember = (CompanyMember*)loginedMember;

	companyMember->createRecruit(job, NumberOfApplicants, Deadline);
}

AddRecruit::~AddRecruit() // �Ҹ���
{
}