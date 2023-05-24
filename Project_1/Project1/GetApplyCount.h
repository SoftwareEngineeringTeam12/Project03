#pragma once
#include <string.h>
#include<string>
using namespace std;
#include "CompanyMember.h"


class GetApplyCount
{
private:
public:
	GetApplyCount(); //생성자 
	string getRecruitCount(Member* loginedMember);
	~GetApplyCount(); //소멸자 (생성자 클래스와 이름 같음)
};