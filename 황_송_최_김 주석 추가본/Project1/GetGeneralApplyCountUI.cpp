#include "GetGeneralApplyCountUI.h"
/*
	�Լ���	 : GetGeneralApplyCountUI::getStatisticApplyNum
	���	 : �α��� �Ϲ� ȸ���� ���� ��� ���
	�Լ����� : output ������, �α��� �ɹ�, GetGeneralApplyCount ��Ʈ�� ��ü
*/
void GetGeneralApplyCountUI::getStatisticApplyNum(FILE* out_fp, Member* loginmember, GetGeneralApplyCount getgeneralapplycount)
{
	GeneralMember* generalmember = (GeneralMember*)loginmember;   //�ɹ��� �Ϲ�ȸ������ ����ȯ
	string result = getgeneralapplycount.getApplyCount(generalmember);
	char stl[MAX_STRING];
	strcpy_s(stl, result.c_str());
	fprintf(out_fp, "5.1. ���� ���� ���\n");
	fprintf(out_fp, "> %s\n", stl);    //���� ��� ���
}
