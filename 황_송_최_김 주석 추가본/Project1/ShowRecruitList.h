#pragma once

#include <string.h>
#include<string>
#include "CompanyMember.h"
using namespace std;

// 등록된 채용정보 조회 (컨트롤 클래스)
class ShowRecruitList
{
private:

public:
	ShowRecruitList(); //생성자 

	string ShowRecruit(Member* loginedMember);

	~ShowRecruitList(); //소멸자
};