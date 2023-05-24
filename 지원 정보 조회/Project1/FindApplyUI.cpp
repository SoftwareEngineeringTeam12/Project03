#include "FindApplyUI.h"
#include "GeneralMember.h"

void FindApplyUI::findMyApply(FILE* out_fp, Member* loginmember, FindApply findapply)
{
	
	GeneralMember* generalMember = (GeneralMember*)loginmember;
	string result = findapply.showMyApplys(generalMember);
	
	char stl[30000];
	fprintf(out_fp, "4. 3. 지원 정보 조회\n");
	strcpy_s(stl, result.c_str());
	fprintf(out_fp, "> %s", stl);
	
	
	
	
}