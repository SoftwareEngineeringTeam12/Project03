#include "GetApplyCount.h"
using namespace std;

GetApplyCount::GetApplyCount() {}

/*
	함수 이름 : GetApplyCount::getRecruitCount()
	기능	  : 업무별 지원자수 통계
	전달 인자 : 로그인된 멤버 포인터
	반환값    : 업무 + 지원자 수 string
*/
string GetApplyCount::getRecruitCount(Member* loginedMember) {

	CompanyMember* companyMember = (CompanyMember*)loginedMember;
	return companyMember->getApplyRecruit();
}
GetApplyCount::~GetApplyCount() {}