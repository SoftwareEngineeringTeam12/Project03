#pragma once
#include "Recruit.h"
#include "FindRecruitUI.h"
#include <iostream>
#include <string>
#define MAX_STRING 32
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

using namespace std;

void FindRecruitUI::startInterface(FILE* in_fp, FindRecruit* findRecruit) {// 인터페이스 시작
}

void FindRecruitUI::searchByCName(FILE* in_fp, FILE* out_fp, FindRecruit findRecruit, CompanyMember** Cmembers, int nextCMember) {

	char CName[MAX_STRING];//input 배열
	fscanf(in_fp, "%s ", CName);

	string result_string = findRecruit.showRecruitByCName(CName, Cmembers, nextCMember);
	const char* c = result_string.c_str();

	fprintf(out_fp, "4.1. 채용 정보 검색\n");
	fprintf(out_fp, "> %s\n", c);
}