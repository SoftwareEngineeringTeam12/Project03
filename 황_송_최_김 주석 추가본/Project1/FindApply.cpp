#pragma once
#include "FIndApply.h"
#include <string>
using namespace std;

/*
	�Լ��� : FindApply::showMyApplys
	��� : ���� ������ ������ ��ȯ����
	���� ���� : �α��� �ɹ�
	��ȯ�� : ���ݱ��� ������ ����(ȸ���̸�, ����ڹ�ȣ, ����, �ο� ��, ��û������)
*/

string  FindApply::showMyApplys(GeneralMember* Mem)
{	

	return Mem->listApply();
}