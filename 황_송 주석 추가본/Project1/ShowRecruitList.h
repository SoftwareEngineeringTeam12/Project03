#pragma once

#include <string.h>
#include<string>
#include "CompanyMember.h"
using namespace std;

// ��ϵ� ä������ ��ȸ (��Ʈ�� Ŭ����)
class ShowRecruitList
{
private:

public:
	ShowRecruitList(); //������ 

	string ShowRecruit(Member* loginedMember);

	~ShowRecruitList(); //�Ҹ���
};