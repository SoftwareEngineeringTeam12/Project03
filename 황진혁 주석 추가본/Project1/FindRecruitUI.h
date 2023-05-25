#pragma once
#include "CompanyMember.h"
#include "FindRecruit.h"
#include <iostream>
#include <string>


class FindRecruitUI
{
public:
	void startInterface(FILE* in_fp, FindRecruit findRecruit);
	void searchByCName(FILE* in_fp, FILE* out_fp, FindRecruit findRecruit, CompanyMember** Cmembers, int nextCMember);
};

