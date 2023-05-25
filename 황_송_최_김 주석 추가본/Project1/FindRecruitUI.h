#pragma once
#include "CompanyMember.h"
#include "FindRecruit.h"
#include <iostream>
#include <string>


class FindRecruitUI
{
public:
	void startInterface();
	void searchByCName(FILE* in_fp, FILE* out_fp, FindRecruit findRecruit, CompanyMember** Cmembers, int nextCMember);
};

