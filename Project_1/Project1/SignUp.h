#pragma once
#include <iostream>
#include <string>
#include "CompanyMember.h"
#include "GeneralMember.h"

using namespace std;
// 회원가입 컨트롤 클래스
class SignUp
{
private:
	// 각각 필요한 정보가 무엇인지 가지고 있음
	// 출력 안함
	string CMemberParams = "ID, PW, CName, BusinessNumber";
	string GMemberParams = "ID, PW, GName, RegisterNumber";
public:
	// 선택한 회원에 따라서 필요한 정보 알려주기
	// 출력 안함
	string showNecessaryInfo(int KindOfMember);
	// 각각의 회원 생성 
	CompanyMember* addNewCMember(string ID, string PW, string CName, string BNum, CompanyMember* Cmembers[], int* nextCMember);
	GeneralMember* addNewGMember(string ID, string PW, string GName, string RNum, GeneralMember* Gmembers[], int* nextGMember);

};
