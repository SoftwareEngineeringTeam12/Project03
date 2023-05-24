#include "Recruit.h"
using namespace std;
#include <iostream>


Recruit::Recruit(string cname,string job, string numberOfApplicants, string deadline) {
	
	this->CName = cname;
	this->Job = job;
	this->Deadline = deadline;
	this->NumberOfApplicants = stoi(numberOfApplicants);
}

string Recruit::getRecruit() {
	return Job + " " + to_string(NumberOfApplicants) + " " + Deadline;
}

string Recruit::getApplyCount() {
	return Job + " " + to_string(ApplyCount);
}
string Recruit::getDetails() {
	//[ȸ���̸�] [����ڹ�ȣ] [����] [�ο� ��] [��û������] }*
	return Job + " " + to_string(NumberOfApplicants) + " " + Deadline;
}

string Recruit::getCName() {
	return CName;
}



Recruit::~Recruit() {}