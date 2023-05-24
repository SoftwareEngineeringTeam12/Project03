#include "CancelApplyUI.h"

void CancelApplyUI::selectApplyToCancel(FILE* in_fp, FILE* out_fp, GeneralMember* loginmember, CancelApply cancelapply)
{
	string del;
	fscanf(in_fp, "%s", del);
	string result = cancelapply.cancelexistingApply(loginmember, del);
	char stl[MAX_STRING];
	strcpy_s(stl, result.c_str());
	fprintf(out_fp, "4. 4. 지원 정보 취소\n");
	fprintf(out_fp, "> %s\n\n", stl);
}