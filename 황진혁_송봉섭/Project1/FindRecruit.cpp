#include <iostream>
#include <string>
#include "FindRecruit.h"
#include "CompanyMember.h"
CompanyMember companyMember;

string FindRecruit::showRecruitByCName(char* CName, CompanyMember** Cmembers, int nextCMember) {

	string str = "";

	for (int i = 0; i < nextCMember; i++)
	{
		if (&Cmembers[i]->getMyRecruitCName() == (string*)CName) {

			str += Cmembers[i]->getMyRecruitDetails() + "\n";
		}

	}

	return str;

}