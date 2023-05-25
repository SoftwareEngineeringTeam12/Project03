#pragma once
#include "Recruit.h"
#include "ApplyRecruitUI.h"
#include <iostream>
#include <string>
#define MAX_STRING 32
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

using namespace std;

void ApplyRecruitUI::startInterface(FILE* in_fp, ApplyRecruit* applyRecruit) {// 인터페이스 시작
}
/*
	함수 이름 : ApplyRecruitUI::applyRecruit()
	기능	  : 채용 지원
	전달 인자 : FILE* in_fp,FILE* out_fp, ApplyRecruit 컨트롤 객체 , 회사회원의 더블포인터, 회사회원의 회원수,로그인된 멤버 포인터
	반환값    :  
*/

void ApplyRecruitUI::applyRecruit(FILE* in_fp, FILE* out_fp, ApplyRecruit applyRecruit, CompanyMember** Cmembers, int nextCMember, Member* loginedMember) {

	char BusinessNumber[MAX_STRING];//input 배열
	fscanf(in_fp, "%s ", BusinessNumber);
	string str(BusinessNumber);
	string result_string = applyRecruit.addApply(str, Cmembers, nextCMember, loginedMember);
	const char* c = result_string.c_str();

	fprintf(out_fp, "4.2. 채용 지원\n");
	fprintf(out_fp, "> %s\n", c);
}
