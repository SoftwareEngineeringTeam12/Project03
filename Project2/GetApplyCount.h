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
	GetApplyCount(); //������ 
	string getRecruitCount();
	~GetApplyCount(); //�Ҹ��� (������ Ŭ������ �̸� ����)
};