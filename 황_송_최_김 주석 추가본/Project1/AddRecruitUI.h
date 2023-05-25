#pragma once
#include <string.h>
#include<string>
#include "AddRecruit.h"
#define MAX_STRING 32
using namespace std;

// 채용 정보 등록 (바운더리 클래스)
class AddRecruitUI
{
private:

public:
	AddRecruitUI(); //생성자 

	void startInterface();
	void createNewRecruit(FILE* in_fp, FILE* out_fp, AddRecruit addRecruit, Member* loginedMember); // 채용 정보 등록

	~AddRecruitUI(); //소멸자
};