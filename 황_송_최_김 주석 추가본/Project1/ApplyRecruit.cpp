#pragma once
#include "CompanyMember.h"
#include "GeneralMember.h"
#include <iostream>
#include <string>
#include"ApplyRecruit.h"

using namespace std;

/*
	�Լ� �̸� : ApplyRecruit::addApply()
	���	  : ä�� ����
	���� ���� : ����ڹ�ȣ,ȸ��ȸ���� �迭������,ȸ��ȸ���� �ο���,�α��ε� ��� ������
	��ȯ��    : ȸ���,����ڹ�ȣ,����
*/

string ApplyRecruit::addApply(string BusinessNumber, CompanyMember* Cmembers[], int nextCMember, Member* loginedMember) {


	string result = "";
	Recruit* rec;
	for (int i = 0; i < nextCMember; i++)
	{
		if (Cmembers[i]->getBusinessNubmer() == BusinessNumber) {
			//companymember�� ��ũ��Ʈ������������ general �� ���� �Ѱ��ֱ�,newapply����
			rec = Cmembers[i]->getMyRecruit();
			GeneralMember* generalMember = (GeneralMember*)loginedMember;
			generalMember->AddNewAppply(rec->getCName(), BusinessNumber, rec->getJob(), rec->getNumberOfApplicants(), rec->getDeadline(), rec);
			result += Cmembers[i]->getCName() +" "  +Cmembers[i]->getBusinessNubmer() + " " + rec->getJob() + "\n";
			
			break;
		}

	}

	return result;
}
