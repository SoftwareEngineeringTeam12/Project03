#pragma once
#include <string.h>
#include<string>
using namespace std;
#include "CompanyMember.h"

// ���� ���� ��� (��Ʈ�� Ŭ����)
class GetApplyCount
{
private:
public:
	GetApplyCount(); //������ 
	string getRecruitCount(Member* loginedMember);
	~GetApplyCount(); //�Ҹ��� (������ Ŭ������ �̸� ����)
};