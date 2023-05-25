#include "GetGeneralApplyCount.h"
#include <string>
#include <iostream>
using namespace std;
/*
	함수명 : GetGeneralApplyCount::getApplyCount
	기능 : 지금까지 지원한 수를 업무별로 반환
	전달인자 : 로그인 맴버
	반환값 : 지원 통계 기능 (업무별, 지원수)
*/
string GetGeneralApplyCount::getApplyCount(GeneralMember* Mem)
{
	return Mem->getApplyNum();
}