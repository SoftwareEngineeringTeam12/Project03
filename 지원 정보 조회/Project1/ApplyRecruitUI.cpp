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

void ApplyRecruitUI::applyRecruit(FILE* in_fp, FILE* out_fp, ApplyRecruit applyRecruit, CompanyMember** Cmembers, int nextCMember, Member* loginedMember) {

	char BusinessNumber[MAX_STRING];//input 배열
	fscanf(in_fp, "%s ", BusinessNumber);
	string str(BusinessNumber);
	string result_string = applyRecruit.addApply(str, Cmembers, nextCMember, loginedMember);
	const char* c = result_string.c_str();

	fprintf(out_fp, "4.2. 채용 지원\n");
	fprintf(out_fp, "> %s\n", c);
}
