#pragma once
#include "SignUpUI.h"
#include <iostream>
#include <string.h>
#include <vector>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

/*
	함수 이름 : SignUpUI::startInterface()
	기능	  : 메뉴 출력용 함수, 출력 안함
	전달 인자 : 
	반환값    : 
*/
void SignUpUI::startInterface() {

}


/*
	함수 이름 : SignUpUI::selectKindOfMember()
	기능	  : 어떤 종류의 회원가입인지 선택
	전달 인자 : input 포인터, SignUp 컨트롤 객체
	반환값    : 어떤 Member인지 정수
*/
int SignUpUI::selectKindOfMember(FILE* in_fp, SignUp signUp) {
	// 입력받기
	int user_type;
	fscanf(in_fp, "%d ", &user_type);
	// 컨트롤의 필요한 정보 받기, 출력 안함
	string params = signUp.showNecessaryInfo(user_type);
	// 어떤 멤버인지 반환
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
	// 입력받기
	char name[MAX_STRING], num[MAX_STRING], id[MAX_STRING], pw[MAX_STRING];
	fscanf(in_fp, "%s %s %s %s", name, num, id, pw);
	// char형을 스트링으로 편하게 변환
	arr[0] = name;
	arr[1] = num;
	arr[2] = id;
	arr[3] = pw;
	// user_type에 따라 다른 멤버 생성 함수 호출
	if (user_type == 1) { // 회사회원
		CompanyMember* newMember = signUp.addNewCMember(id, pw, name, num, Cmembers, nextCMember);
	}
	else if(user_type==2) {// 일반회원
		GeneralMember* newMember = signUp.addNewGMember(id, pw, name, num, Gmembers, nextGMember);
	}
	// 출력
	fprintf(out_fp, "1.1. 회원가입\n");
	fprintf(out_fp, "> %d %s %s %s %s\n\n", user_type, name, num, id, pw);

}