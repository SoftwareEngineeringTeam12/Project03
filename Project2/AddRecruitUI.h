#pragma once
#include <string.h>
#include<string>
#include "AddRecruit.h"
#define MAX_STRING 32
using namespace std;


class AddRecruitUI
{
private:
	
public:
	AddRecruitUI(); //생성자 

	void startInterface();
	void registerRecruit(); // 필요없긴함

	void createNewRecruit(FILE* in_fp, FILE* out_fp, AddRecruit addRecruit, Member* loginedMember);
	~AddRecruitUI(); //소멸자
};