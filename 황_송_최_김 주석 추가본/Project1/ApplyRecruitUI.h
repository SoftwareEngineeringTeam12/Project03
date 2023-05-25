#pragma once
#include "CompanyMember.h"
#include "GeneralMember.h"
#include "ApplyRecruit.h"
#include <iostream>
#include <string>

class ApplyRecruitUI {


public:
	void startInterface(FILE* in_fp, ApplyRecruit* applyRecruit);

	void applyRecruit(FILE* in_fp, FILE* out_fp, ApplyRecruit applyRecruit, CompanyMember** Cmembers, int nextCMember, Member* loginedMember);
};