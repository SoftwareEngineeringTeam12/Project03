#include "GetGeneralApplyCountUI.h"

void GetGeneralApplyCountUI::getStatisticApplyNum(FILE* out_fp, GeneralMember* loginmember, GetGeneralApplyCount getgeneralapplycount)
{
	string result = getgeneralapplycount.getApplyCount(loginmember);
	char stl[MAX_STRING];
	strcpy_s(stl, result.c_str());
	fprintf(out_fp, "5. 1. 지원 정보 통계\n");
	fprintf(out_fp, "> %s\n\n", stl);
}