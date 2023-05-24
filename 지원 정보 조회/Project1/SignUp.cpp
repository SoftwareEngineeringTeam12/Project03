#pragma once
#include "SignUp.h"
#include <iostream>
#include <string>

using namespace std;

/*
	함수 이름 : SignUp::showNecessaryInfo()
	기능	  : 회원 정보 알려주기, 출력 안함
	전달 인자 : KindOfMember
	반환값    : 필요한 회원 정보
*/
string SignUp::showNecessaryInfo(int KindOfMember) {
	if (KindOfMember == 1) {
		return this->CMemberParams;
	}
	else {
		return this->GMemberParams;
	}
}

/*
	함수 이름 : SignUp::addNewCMember()
	기능	  : 회사회원 생성
	전달 인자 : ID, PW, CName, BNum
	반환값    : 회사회원 포인터
*/
CompanyMember* SignUp::addNewCMember(string ID, string PW, string CName, string BNum, CompanyMember* Cmembers[], int* nextCMember) {
	CompanyMember* newCompanyMember = new CompanyMember(ID, PW, CName, BNum);
	Cmembers[*nextCMember] = newCompanyMember;
	(*nextCMember)++;
	return newCompanyMember;
}
/*
	함수 이름 : SignUp::addNewGMember()
	기능	  : 회사회원 생성
	전달 인자 : ID, PW, GName, RNum
	반환값    : 일반회원 포인터
*/
GeneralMember* SignUp::addNewGMember(string ID, string PW, string GName, string RNum, GeneralMember* Gmembers[], int* nextGMember) {
	GeneralMember* newGeneralMember = new GeneralMember(ID, PW, GName, RNum);
	Gmembers[*nextGMember] = newGeneralMember;
	(*nextGMember)++;
	return newGeneralMember;
}
