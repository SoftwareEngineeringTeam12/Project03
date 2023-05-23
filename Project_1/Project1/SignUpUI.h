#pragma once
#include "SignUp.h"
#include <iostream>
#include <string>
#define MAX_STRING 32

using namespace std;

// 회원가입을 위한 바운더리 클래스
class SignUpUI
{
public:

	void startInterface(FILE* in_fp, SignUp* signUp);// 인터페이스 시작
	int selectKindOfMember(FILE* in_fp, SignUp signUp); // 어떤 종류의 Member인지 선택
	// Member 생성
	void createNewMember(FILE* in_fp, FILE* out_fp, int user_type, SignUp signUp, CompanyMember* Cmembers[], int* nextCMember, GeneralMember* Gmembers[], int* nextGMember);

};
