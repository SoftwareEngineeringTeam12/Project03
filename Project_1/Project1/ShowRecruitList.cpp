#include "ShowRecruitList.h"

ShowRecruitList::ShowRecruitList() {} // 持失切

string ShowRecruitList::ShowRecruit(Member* loginedMember) {

	CompanyMember* companyMember = (CompanyMember*)loginedMember;
	return companyMember->listRecruit();
}

ShowRecruitList::~ShowRecruitList() {} // 社瑚切