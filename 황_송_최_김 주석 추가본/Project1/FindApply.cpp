#pragma once
#include "FIndApply.h"
#include <string>
using namespace std;

/*
	함수명 : FindApply::showMyApplys
	기능 : 내가 지원한 정보를 반환해줘
	전달 인자 : 로그인 맴버
	반환값 : 지금까지 지원한 정보(회사이름, 사업자번호, 업무, 인원 수, 신청마감일)
*/

string  FindApply::showMyApplys(GeneralMember* Mem)
{	

	return Mem->listApply();
}