#include "CancelApplyUI.h"

void CancelApplyUI::selectApplyToCancel(FILE* in_fp, FILE* out_fp, Member* loginmember, CancelApply cancelapply)
{
	GeneralMember* generalmember = (GeneralMember*)loginmember;
	string del;
	char delc[300];
	fscanf_s(in_fp, "%s", delc);
	del = delc;
	string result = cancelapply.cancelexistingApply(generalmember, del);
	char stl[MAX_STRING];
	strcpy_s(stl, result.c_str());
	fprintf(out_fp, "4. 4. ���� ���� ���\n");
	fprintf(out_fp, "> %s\n", stl);
}
