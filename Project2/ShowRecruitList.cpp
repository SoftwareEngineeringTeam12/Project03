#include "ShowRecruitList.h"

ShowRecruitList::ShowRecruitList() {} // ������

string ShowRecruitList::ShowRecruit() {
	return companyMember->listRecruit();
}

ShowRecruitList::~ShowRecruitList(){} // �Ҹ���