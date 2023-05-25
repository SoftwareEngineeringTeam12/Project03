#pragma once

#include "AddRecruit.h"
using namespace std;
#include <iostream>
AddRecruit::AddRecruit() {}

void AddRecruit::showRegisterRecruit() {

}

/*
	함수 이름 : AddRecruit::AddNewRecruit()
	기능	  : 채용 정보 등록
	전달 인자 : 업무 , 모집 인원수 , 마감기한 , 로그인된 멤버 포인터
	반환값    :
*/
void AddRecruit::AddNewRecruit(string job, string NumberOfApplicants, string Deadline, Member* loginedMember) {

	CompanyMember* companyMember = (CompanyMember*)loginedMember;

	companyMember->createRecruit(job, NumberOfApplicants, Deadline);
}

AddRecruit::~AddRecruit() // 소멸자
{
}