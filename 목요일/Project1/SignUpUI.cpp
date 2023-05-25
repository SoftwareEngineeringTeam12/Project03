#pragma once
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
	전달 인자 : input 포인터, SignUp 컨트롤 객체
	반환값    : 어떤 Member인지 정수
*/
int SignUpUI::selectKindOfMember(FILE* in_fp, SignUp signUp) {
	int user_type;
	fscanf(in_fp, "%d ", &user_type);
	string params = signUp.showNecessaryInfo(user_type);
	return user_type;

}
/*
	함수 이름 : SignUpUI::createNewMember()
	기능	  : 회원가입
	전달 인자 : input 포인터, output 포인터, user type, SignUp 컨트롤 객체, 회사 회원 포인터 배열, 회사멤버수, 일반 회원 포인터 배열, 일반 멤버수
	반환값    : 
*/
void SignUpUI::createNewMember(FILE* in_fp, FILE* out_fp, int user_type, SignUp signUp, CompanyMember* Cmembers[], int* nextCMember, GeneralMember* Gmembers[], int* nextGMember)
{
	string* arr = new string[4];  // 동적으로 배열 생성

	char name[MAX_STRING], num[MAX_STRING], id[MAX_STRING], pw[MAX_STRING];
	fscanf(in_fp, "%s %s %s %s", name, num, id, pw);
	// 스트링으로 편하게 변환
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
	fprintf(out_fp, "> %d %s %s %s %s\n\n", user_type, name, num, id, pw);

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