#include "ShowRecruitList.h"

ShowRecruitList::ShowRecruitList() {} // 持失切

string ShowRecruitList::ShowRecruit() {
	return companyMember->listRecruit();
}

ShowRecruitList::~ShowRecruitList(){} // 社瑚切