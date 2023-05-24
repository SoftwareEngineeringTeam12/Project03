#include "CompanyMember.h"
using namespace std;


CompanyMember::CompanyMember(string _ID, string _PW, string _CName, string _BusinessNumber)
	: Member(_ID, _PW), CName(_CName), BusinessNumber(_BusinessNumber)
{
	Recruit_index = 0;
}

void CompanyMember::createRecruit(string Job, string NumberOfApplicants, string Deadline) {

	recruits[Recruit_index++] = new Recruit(Job, NumberOfApplicants, Deadline);
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