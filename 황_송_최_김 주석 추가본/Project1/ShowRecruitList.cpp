#include "ShowRecruitList.h"

ShowRecruitList::ShowRecruitList() {} // ������

/*
    �Լ� �̸� : ShowRecruitList::ShowRecruit()
    ���	  : ��ϵ� ä������ ��ȸ
    ���� ���� : �α��ε� ��� ������
    ��ȯ��    : �ش� ȸ�� ȸ���� ��ϵ� ä������ string
*/
string ShowRecruitList::ShowRecruit(Member* loginedMember) {

	CompanyMember* companyMember = (CompanyMember*)loginedMember;
	return companyMember->listRecruit();
}

ShowRecruitList::~ShowRecruitList() {} // �Ҹ���