#pragma once

#include "AddRecruitUI.h"
#include <iostream>
#include <string.h>
#include <vector>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
using namespace std;

AddRecruitUI::AddRecruitUI() {}

void AddRecruitUI::startInterface() {

}

void AddRecruitUI::registerRecruit() {

}

/*
	�Լ� �̸� : AddRecruitUI::createNewRecruit()
	���	  : ä�� ���� ���
	���� ���� : FILE* in_fp, FILE* out_fp, AddRecruit ��Ʈ�� ��ü, �α��ε� ��� ������
	��ȯ��    : 
*/
void AddRecruitUI::createNewRecruit(FILE* in_fp, FILE* out_fp, AddRecruit addRecruit, Member* loginedMember) {
	string* arr = new string[3];  // �������� �迭 ����
	char job[MAX_STRING], num_app[MAX_STRING], deadline[MAX_STRING]; // ��Ƴ��� �迭
	fscanf(in_fp, "%s %s %s", job, num_app, deadline); // �迭�� ��ǲ ���
	arr[0] = job;
	arr[1] = num_app;
	arr[2] = deadline;

	addRecruit.AddNewRecruit(job, num_app, deadline, loginedMember);

	// ��� ����
	fprintf(out_fp, "3.1. ä�� ���� ���\n");
	fprintf(out_fp, "> %s %s %s \n\n", job, num_app, deadline);
}

AddRecruitUI::~AddRecruitUI() // �Ҹ���
{
}