
#pragma once
#include <string.h>
#include<string>
#include "GetApplyCount.h"
using namespace std;

// ���� ���� ��� (�ٿ���� Ŭ����)
class GetApplyCountUI
{
private:
public:
	GetApplyCountUI(); //������ 

	void startInterface();
	void getStatisticsRecruitNum(FILE* out_fp, GetApplyCount getApplyCount, Member* loginedMember); // �ʿ������

	~GetApplyCountUI(); //�Ҹ���
};