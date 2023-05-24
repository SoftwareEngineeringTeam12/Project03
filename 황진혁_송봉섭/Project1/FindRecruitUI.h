
#pragma once

#include <iostream>
#include <string>
#include "FindRecruit.h"
class FindRecruitUI
{
public:
	void startInterface(FILE* in_fp, FindRecruit* findRecruit);
	string searchByCName(FILE* in_fp, FILE* out_fp, FindRecruit findRecruit, CompanyMember** Cmembers, int nextCMember);
};

