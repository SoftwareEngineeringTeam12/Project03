#pragma once
#include "SignUpUI.h"
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
	// 멤버에 따라 다르게 반환
	if (KindOfMember == 1) {
		return this->CMemberParams;
	}
	else if (KindOfMember == 2) {
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
	// 생성자로 회사회원 생성
	CompanyMember* newCompanyMember = new CompanyMember(ID, PW, CName, BNum);
	// 배열에 추가
	Cmembers[*nextCMember] = newCompanyMember;
	// 배열 인덱스 ++
	(*nextCMember)++;
	// 해당 회원 반환
	return newCompanyMember;
}
/*
	함수 이름 : SignUp::addNewGMember()
	기능	  : 회사회원 생성
	전달 인자 : ID, PW, GName, RNum
	반환값    : 일반회원 포인터
*/
GeneralMember* SignUp::addNewGMember(string ID, string PW, string GName, string RNum, GeneralMember* Gmembers[], int* nextGMember) {
	// 생성자로 일반회원 생성
	GeneralMember* newGeneralMember = new GeneralMember(ID, PW, GName, RNum);
	// 배열에 추가
	Gmembers[*nextGMember] = newGeneralMember;
	// 배열 인덱스 ++
	(*nextGMember)++;
	// 해당 회원 반환
	return newGeneralMember;
}
