#include "CancelApplyUI.h"
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
/*
	�Լ� �̸� : CancelApplyUI::startInterface()
	���	  : �޴� ��¿� �Լ�, ��� ����
	���� ���� :
	��ȯ��    :
*/
void CancelApplyUI::startInterface() {

}
/*
�Լ� �̸� : FindApplyUI::findMyApply()
��� : �α��� ȸ���� �ۼ��� ������ ���
���� ���� : output ������, loginmember, FindApply ��Ʈ�� ��ü
*/

void CancelApplyUI::selectApplyToCancel(FILE* in_fp, FILE* out_fp, Member* loginmember, CancelApply cancelapply)
{
	GeneralMember* generalmember = (GeneralMember*)loginmember; //�ɹ��� �Ϲݸɹ��� ����ȯ
	string del;
	char delc[32];
	fscanf(in_fp, "%s ", delc);   //������ ����ڹ�ȣ �Է¹ޱ�
	del = delc;
	
	string result = cancelapply.cancelexistingApply(generalmember, del);
	char stl[MAX_STRING];
	strcpy_s(stl, result.c_str());
	fprintf(out_fp, "4.4. ���� ���� ���\n");       
	fprintf(out_fp, "> %s\n\n", stl);//������ ȸ������ ���
}
