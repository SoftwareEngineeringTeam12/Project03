
#pragma once
#include <string.h>
#include<string>
#include "GetApplyCount.h"
using namespace std;


class GetApplyCountUI
{
private:
	GetApplyCount getApplyCount;

public:
	GetApplyCountUI(); //������ 

	void startInterface();
	string getStatisticsRecruitNum(); // �ʿ������

	void createNewRecruit(string job, string NumberOfApplicants, string Deadline);
	~GetApplyCountUI(); //�Ҹ���
};