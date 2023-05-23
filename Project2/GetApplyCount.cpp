#include "GetApplyCount.h"
using namespace std;

GetApplyCount::GetApplyCount(){}

string GetApplyCount::getRecruitCount(Member* loginedMember){

	CompanyMember* companyMember = (CompanyMember*)loginedMember;
	return companyMember->getApplyRecruit();
}
GetApplyCount::~GetApplyCount(){}