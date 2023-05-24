#pragma once
#include <iostream>
#include <string>
#include "CompanyMember.h"
#include "FindRecruitUI.h"
FindRecruitUI findrecruitUI;
class FindRecruit
{
private:
public:

	string showRecruitByCName(char* CName, CompanyMember** Cmembers, int nextCMember);
	//void findRecruitByCName(char* CName);



};
