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
	함수 이름 : AddRecruitUI::createNewRecruit()
	기능	  : 채용 정보 등록
	전달 인자 : FILE* in_fp, FILE* out_fp, AddRecruit 컨트롤 객체, 로그인된 멤버 포인터
	반환값    : 
*/
void AddRecruitUI::createNewRecruit(FILE* in_fp, FILE* out_fp, AddRecruit addRecruit, Member* loginedMember) {
	string* arr = new string[3];  // 동적으로 배열 생성
	char job[MAX_STRING], num_app[MAX_STRING], deadline[MAX_STRING]; // 담아놓는 배열
	fscanf(in_fp, "%s %s %s", job, num_app, deadline); // 배열에 인풋 담기
	arr[0] = job;
	arr[1] = num_app;
	arr[2] = deadline;

	addRecruit.AddNewRecruit(job, num_app, deadline, loginedMember);

	// 출력 형식
	fprintf(out_fp, "3.1. 채용 정보 등록\n");
	fprintf(out_fp, "> %s %s %s \n\n", job, num_app, deadline);
}

AddRecruitUI::~AddRecruitUI() // 소멸자
{
}