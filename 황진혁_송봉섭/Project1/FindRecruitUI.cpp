#include "FindRecruitUI.h"
#include "main.cpp"
#include <iostream>
#include <string>
#include "Recruit.h"
using namespace std;

void FindRecruitUI::startInterface(FILE* in_fp, FindRecruit* findRecruit) {// �������̽� ����
}

string FindRecruitUI::searchByCName(FILE* in_fp, FILE* out_fp, FindRecruit findRecruit, CompanyMember** Cmembers, int nextCMember) {

	char CName[MAX_STRING];//input �迭
	fscanf(in_fp, "%s ", CName);

	string result_string = findRecruit.showRecruitByCName(CName, Cmembers, nextCMember);
	const char* c = result_string.c_str();

	fprintf(out_fp, "4.1. ä�� ���� �˻�\n");
	fprintf(out_fp, "%s %s %s %s %s \n", c);
}