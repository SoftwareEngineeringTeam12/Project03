#include "CompanyMember.h"
using namespace std;
#include <iostream>

CompanyMember::CompanyMember() {
	string CName;
}

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
		str += CName + BusinessNumber + recruits[i]->getDetails();
	}
	return str;
}


void CompanyMember::createRecruit(string Job, string NumberOfApplicants, string Deadline) {
	
	Recruit * newRecruit = new Recruit(Job, NumberOfApplicants, Deadline);
	this->recruits[this->Recruit_index++] = newRecruit;
	cout << "¿©±â" << endl;
}

string CompanyMember::listRecruit() {

	string str = "";

	for (int i = 0; i < Recruit_index; i++)
	{
		str += recruits[i]->getRecruit() + "\n";
	}
	return str;
}

string CompanyMember::getApplyRecruit() {
	string str = "";
	for (int i = 0; i < Recruit_index; i++)
	{
		str += recruits[i]->getApplyCount() + "\n";
	}
	return str;

}

CompanyMember::~CompanyMember() {

}