#pragma once
#include "GeneralMember.h"
#include "GetGeneralApplyCount.h"
#include <iostream>
#include <string>
#define MAX_STRING 32
class GetGeneralApplyCountUI
{
public:
	void startInterface(); // 출력 안함

	void getStatisticApplyNum(FILE* out_fp, Member* loginmember, GetGeneralApplyCount getgeneralapplycount);
};