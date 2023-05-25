#pragma once
#include "CompanyMember.h"
#include "GeneralMember.h"
#include <iostream>
#include <string>
#include"ApplyRecruit.h"

using namespace std;

/*
	함수 이름 : ApplyRecruit::addApply()
	기능	  : 채용 지원
	전달 인자 : 사업자번호,회사회원의 배열포인터,회사회원의 인원수,로그인된 멤버 포인터
	반환값    : 회사명,사업자번호,업무
*/

string ApplyRecruit::addApply(string BusinessNumber, CompanyMember* Cmembers[], int nextCMember, Member* loginedMember) {


	string result = "";
	Recruit* rec;
	for (int i = 0; i < nextCMember; i++)
	{
		if (Cmembers[i]->getBusinessNubmer() == BusinessNumber) {
			//companymember에 리크루트정보가져오기 general 에 정보 넘겨주기,newapply생성
			rec = Cmembers[i]->getMyRecruit();
			GeneralMember* generalMember = (GeneralMember*)loginedMember;
			generalMember->AddNewAppply(rec->getCName(), BusinessNumber, rec->getJob(), rec->getNumberOfApplicants(), rec->getDeadline(), rec);
			result += Cmembers[i]->getCName() +" "  +Cmembers[i]->getBusinessNubmer() + " " + rec->getJob() + "\n";
			
			break;
		}

	}

	return result;
}
