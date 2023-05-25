#pragma once

#include <string.h>
#include<string>
#include "CompanyMember.h"
using namespace std;


class ShowRecruitList
{
private:

public:
	ShowRecruitList(); //持失切 

	string ShowRecruit(Member* loginedMember);

	~ShowRecruitList(); //社瑚切
};