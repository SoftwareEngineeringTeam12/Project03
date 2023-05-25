#include "CancelApplyUI.h"
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
void CancelApplyUI::selectApplyToCancel(FILE* in_fp, FILE* out_fp, Member* loginmember, CancelApply cancelapply)
{
	GeneralMember* generalmember = (GeneralMember*)loginmember;
	string del;
	char delc[32];
	fscanf(in_fp, "%s ", delc);
	del = delc;
	
	string result = cancelapply.cancelexistingApply(generalmember, del);
	char stl[MAX_STRING];
	strcpy_s(stl, result.c_str());
	fprintf(out_fp, "4. 4. 지원 정보 취소\n");
	fprintf(out_fp, "> %s\n\n", stl);
}
