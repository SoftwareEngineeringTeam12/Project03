#pragma once
#include "GeneralMember.h"
#include "GetGeneralApplyCount.h"
#include <iostream>
#include <string>
#define MAX_STRING 32
class GetGeneralApplyCountUI
{
public:
	void getStatisticApplyNum(FILE* out_fp, GeneralMember* loginmember, GetGeneralApplyCount getgeneralapplycount);
};