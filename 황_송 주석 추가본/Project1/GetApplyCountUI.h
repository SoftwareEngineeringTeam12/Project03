
#pragma once
#include <string.h>
#include<string>
#include "GetApplyCount.h"
using namespace std;

// 지원 정보 통계 (바운더리 클래스)
class GetApplyCountUI
{
private:
public:
	GetApplyCountUI(); //생성자 

	void startInterface();
	void getStatisticsRecruitNum(FILE* out_fp, GetApplyCount getApplyCount, Member* loginedMember); // 필요없긴함

	~GetApplyCountUI(); //소멸자
};