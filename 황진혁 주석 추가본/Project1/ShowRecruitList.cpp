#include "ShowRecruitList.h"

ShowRecruitList::ShowRecruitList() {} // ������

string ShowRecruitList::ShowRecruit(Member* loginedMember) {

	CompanyMember* companyMember = (CompanyMember*)loginedMember;
	return companyMember->listRecruit();
}

ShowRecruitList::~ShowRecruitList() {} // �Ҹ���