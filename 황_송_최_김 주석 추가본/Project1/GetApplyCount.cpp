#include "GetApplyCount.h"
using namespace std;

GetApplyCount::GetApplyCount() {}

/*
	�Լ� �̸� : GetApplyCount::getRecruitCount()
	���	  : ������ �����ڼ� ���
	���� ���� : �α��ε� ��� ������
	��ȯ��    : ���� + ������ �� string
*/
string GetApplyCount::getRecruitCount(Member* loginedMember) {

	CompanyMember* companyMember = (CompanyMember*)loginedMember;
	return companyMember->getApplyRecruit();
}
GetApplyCount::~GetApplyCount() {}