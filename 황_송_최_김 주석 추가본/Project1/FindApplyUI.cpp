#include "FindApplyUI.h"
#include "GeneralMember.h"


/*
�Լ� �̸� : FindApplyUI::findMyApply()
��� : �α��� ȸ���� �ۼ��� ������ ���
���� ���� : output ������, loginmember, FindApply ��Ʈ�� ��ü
*/


void FindApplyUI::findMyApply(FILE* out_fp, Member* loginmember, FindApply findapply)
{
	
	GeneralMember* generalMember = (GeneralMember*)loginmember;//�ɹ��� �Ϲ�ȸ������ ����ȯ
	string result = findapply.showMyApplys(generalMember);
	result += '\n';
	char stl[10000];
	fprintf(out_fp, "4. 3. ���� ���� ��ȸ\n");   
	strcpy_s(stl, result.c_str());
	fprintf(out_fp, "> %s", stl);       //���ݱ��� ������ ������ ���
}