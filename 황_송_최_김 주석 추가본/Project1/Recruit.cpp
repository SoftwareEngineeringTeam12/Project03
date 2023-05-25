#include "Recruit.h"
using namespace std;
#include <iostream>


Recruit::Recruit(string cname, string job, string numberOfApplicants, string deadline) {

	this->CName = cname;
	this->Job = job;
	this->Deadline = deadline;
	this->NumberOfApplicants = stoi(numberOfApplicants);
}

void Recruit::plusApplyCount() {
	this->ApplyCount++;
}
void Recruit::minusApplyCount() {
	this->ApplyCount--;
}

/*
	�Լ� �̸� : Recruit::getRecruit()
	���	  : ä�� ���� ��ȸ
	���� ���� :
	��ȯ��    : ���� , �����ο��� , �������� �� string���� ��ȯ
*/
string Recruit::getRecruit() {
	return Job + " " + to_string(NumberOfApplicants) + " " + Deadline;
}
/*
	�Լ� �̸� : Recruit::getApplyCount()
	���	  : ȸ�� ȸ���� ���� ���� ����Ҷ� ���� + �����ڼ��� ��ȯ
	���� ���� :
	��ȯ��    : ���� , �����ڼ��� �� string ���� ���
*/
string Recruit::getApplyCount() {
	return Job + " " + to_string(ApplyCount);
}
/*
	�Լ� �̸� : Recruit::getDetails()
	���	  : ä�� ���� �˻�
	���� ���� :
	��ȯ��    : ���� , �����ο��� , �������� �� string���� ��ȯ
*/
string Recruit::getDetails() {
	//[ȸ���̸�] [����ڹ�ȣ] [����] [�ο� ��] [��û������] }*
	return Job + " " + to_string(NumberOfApplicants) + " " + Deadline;
}

//get �Լ�
string Recruit::getJob() {
	return Job;
}
string Recruit::getDeadline() {
	return Deadline;
}

int Recruit::getNumberOfApplicants() {
	return NumberOfApplicants;
}

string Recruit::getCName() {
	return CName;
}



Recruit::~Recruit() {}