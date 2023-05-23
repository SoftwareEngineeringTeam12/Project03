#include "GetApplyCount.h"
using namespace std;

GetApplyCount::GetApplyCount(){}

string GetApplyCount::getRecruitCount(){
	return companyMember->getApplyRecruit();
}
GetApplyCount::~GetApplyCount(){}