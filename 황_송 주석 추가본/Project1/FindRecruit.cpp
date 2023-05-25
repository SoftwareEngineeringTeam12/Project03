#pragma once
#include "CompanyMember.h"
#include <iostream>
#include <string>
#include "FindRecruit.h"



/*
	함수 이름 : FindRecruit::showRecruitByCName()
	기능	  : 채용 정보 검색
	전달 인자 : 회사명의 포인터, 회사회원의 포인터배열, 회사회원의 회원수
	반환값    : 회사명과 일치하는 채용 정보 string
*/


string FindRecruit::showRecruitByCName(char* CName, CompanyMember* Cmembers[], int nextCMember) {

	string str(CName);
	string result = "";

	for (int i = 0; i < nextCMember; i++)
	{
		if (Cmembers[i]->getMyRecruitCName() == str) {

			result += Cmembers[i]->getMyRecruitDetails() + "\n";
		}

	}

	return result;

}