#pragma once

#include <string.h>
#include<string>
#include "CompanyMember.h"
using namespace std;


class ShowRecruitList
{
private:
	CompanyMember* companyMember;


public:
	ShowRecruitList(); //持失切 

	string ShowRecruit();

	~ShowRecruitList(); //社瑚切
};