#pragma once
#include <string.h>
#include<string>
using namespace std;
#include "CompanyMember.h"


class GetApplyCount
{
private:
	CompanyMember* companyMember;

public:
	GetApplyCount(); //생성자 
	string getRecruitCount();
	~GetApplyCount(); //소멸자 (생성자 클래스와 이름 같음)
};