#include "SignUpUI.h"
#include <iostream>
#include <string.h>
#include <vector>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

void SignUpUI::startInterface(FILE* in_fp, SignUp* signUp) {// 인터페이스 시작
}


/*
	함수 이름 : SignUpUI::selectKindOfMember()
	기능	  : 어떤 종류의 회원가입인지 선택
	전달 인자 : KindOfMember
	반환값    : 결과 Bool True False
*/
int SignUpUI::selectKindOfMember(FILE* in_fp, SignUp signUp) {
	int user_type;
	fscanf(in_fp, "%d ", &user_type);
	string params = signUp.showNecessaryInfo(user_type);
	return user_type;

}

void SignUpUI::createNewMember(FILE* in_fp, FILE* out_fp, int user_type, SignUp signUp, CompanyMember* Cmembers[], int* nextCMember, GeneralMember* Gmembers[], int* nextGMember)
{
	string* arr = new string[4];  // 동적으로 배열 생성
	
	char name[MAX_STRING], num[MAX_STRING], id[MAX_STRING], pw[MAX_STRING];
	fscanf(in_fp, "%s %s %s %s", name, num, id, pw);
	
	arr[0] = name;
	arr[1] = num;
	arr[2] = id;
	arr[3] = pw;
	//cout << "1. 1. 회원가입\n > "<< user_type << " " << name << " " << num << " " << id << " " << pw << endl;
	if (user_type == 1) {
		CompanyMember* newMember = signUp.addNewCMember(id, pw, name, num, Cmembers, nextCMember);

	}
	else {
		GeneralMember* newMember = signUp.addNewGMember(id, pw, name, num, Gmembers, nextGMember);
	}

	fprintf(out_fp, "1.1. 회원가입\n");
	fprintf(out_fp, "> %d %s %s %s %s\n\n",user_type, name, num, id, pw);
	
}
/*
void SignUpUI::startInterface(FILE* in_fp) {
	int user_type;
	fscanf(in_fp, "%d ", user_type);
	bool result;
	result = this->selectKindOfMember(user_type);
	if (result == false) {
		return;
	}
	char name[MAX_STRING], num[MAX_STRING], id[MAX_STRING], pw[MAX_STRING];
	fscanf(in_fp, "%s %s %s %s", name, num, id, pw);

	return;
}
*/