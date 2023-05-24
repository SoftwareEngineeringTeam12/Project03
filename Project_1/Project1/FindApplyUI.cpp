#include "FindApplyUI.h"
#include "GeneralMember.h"
#define MAX_STRING 32
void FindApplyUI::findMyApply(FILE* out_fp, GeneralMember* loginmember, FindApply findapply)
{
	string result = findapply.showMyApplys(&loginmember);
	char stl[MAX_STRING];
	strcpy_s(stl, result.c_str());
	fprintf(out_fp, "4. 3. 지원 정보 조회\n");
	fprintf(out_fp, "> %s\n\n", stl);
}