#include "CompanyMember.h"
using namespace std;
#include <iostream>


/*
	�Լ� �̸� : CompanyMember::createRecruit()
	���	  : ä�� ���� ���
	���� ���� : ���� , ���� �ο��� , ��������
	��ȯ��    :
*/
void CompanyMember::createRecruit(string Job, string NumberOfApplicants, string Deadline) {
	// ���޵� ������ ä�� ���� ����
	Recruit* newRecruit = new Recruit(this->CName, Job, NumberOfApplicants, Deadline); 
	this->recruits[this->Recruit_index++] = newRecruit;
}

Recruit* CompanyMember::getMyRecruit() {
	return this->recruits[(this->Recruit_index) - 1];
}

/*
	�Լ� �̸� : CompanyMember::listRecruit()
	���	  : ��ϵ� ä������ ��ȸ
	���� ���� : 
	��ȯ��    : �ش� ȸ�� ȸ���� ��ϵ� ä������ string
*/
string CompanyMember::listRecruit() {

	string str = "";

	for (int i = 0; i < Recruit_index; i++)
	{
		str += recruits[i]->getRecruit() + "\n";
	}
	return str;
}

/*
	�Լ� �̸� : CompanyMember::getApplyRecruit()
	���	  : ������ ������ �� ��ȯ 
	���� ���� :
	��ȯ��    : �ش� ȸ���� ��ϵ� ä�� ������ ������ ������ �� string
*/
string CompanyMember::getApplyRecruit() {
	string str = "";
	for (int i = 0; i < Recruit_index; i++)
	{
		str += recruits[i]->getApplyCount() + "\n";
	}
	return str;

}
/*
	�Լ� �̸� : CompanyMember::getMyRecruitCName() 
	���	  : ȸ���� ��ġ�ϴ� ä������ Ȯ��
	���� ���� :
	��ȯ��    : �ش� ä������ ȸ��� ��ȯ
*/

string CompanyMember::getMyRecruitCName() {
	string str = "";

	for (int i = 0; i < Recruit_index; i++)
	{
		str += recruits[i]->getCName();
	}
	return str;
}

string CompanyMember::getMyRecruitDetails() {
	string str = "";
	for (int i = 0; i < Recruit_index; i++)
	{
		str += CName + " " + BusinessNumber + " " + recruits[i]->getDetails();
	}
	return str;
}

//get�Լ�

string CompanyMember::getBusinessNubmer() {

	return this->BusinessNumber;
}
string CompanyMember::getCName() {

	return this->CName;
}


CompanyMember::~CompanyMember() {

}