#include "GetGeneralApplyCount.h"
#include <string>
#include <iostream>
using namespace std;
/*
	�Լ��� : GetGeneralApplyCount::getApplyCount
	��� : ���ݱ��� ������ ���� �������� ��ȯ
	�������� : �α��� �ɹ�
	��ȯ�� : ���� ��� ��� (������, ������)
*/
string GetGeneralApplyCount::getApplyCount(GeneralMember* Mem)
{
	return Mem->getApplyNum();
}