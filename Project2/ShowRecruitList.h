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
	ShowRecruitList(); //������ 

	string ShowRecruit();

	~ShowRecruitList(); //�Ҹ���
};