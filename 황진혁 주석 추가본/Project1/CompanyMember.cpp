#include "CompanyMember.h"
using namespace std;
#include <iostream>



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

string CompanyMember::getBusinessNubmer() {

	return this->BusinessNumber;
}
string CompanyMember::getCName() {

	return this->CName;
}

void CompanyMember::createRecruit(string Job, string NumberOfApplicants, string Deadline) {

	Recruit* newRecruit = new Recruit(this->CName, Job, NumberOfApplicants, Deadline);
	this->recruits[this->Recruit_index++] = newRecruit;
}

Recruit* CompanyMember::getMyRecruit() {
	return this->recruits[(this->Recruit_index) - 1];
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