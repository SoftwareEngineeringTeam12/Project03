
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
	GetApplyCountUI(); //생성자 

	void startInterface();
	string getStatisticsRecruitNum(); // 필요없긴함

	void createNewRecruit(string job, string NumberOfApplicants, string Deadline);
	~GetApplyCountUI(); //소멸자
};