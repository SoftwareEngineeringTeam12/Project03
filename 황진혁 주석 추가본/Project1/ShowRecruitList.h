#pragma once

#include <string.h>
#include<string>
#include "CompanyMember.h"
using namespace std;


class ShowRecruitList
{
private:

public:
	ShowRecruitList(); //������ 

	string ShowRecruit(Member* loginedMember);

	~ShowRecruitList(); //�Ҹ���
};