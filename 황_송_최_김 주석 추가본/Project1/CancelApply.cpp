#include "CancelApply.h"

/*
	�Լ��� : CancelApply::cancelexistingApply
	��� : �α��θɹ��� �������� ����ڹ�ȣ�� ������ �����Ѵ�.
	�������� : �α��� �ɹ�, ����� ��ȣ
	��ȯ�� : ������ ������ ����(ȸ���̸�, ����� ��ȣ, ����)
*/

string CancelApply::cancelexistingApply(GeneralMember* Mem, string del)//������ ����
{
	return Mem->deleteApply(del);
}
