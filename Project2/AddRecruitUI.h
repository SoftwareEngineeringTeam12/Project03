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
	AddRecruitUI(); //������ 

	void startInterface();
	void registerRecruit(); // �ʿ������

	void createNewRecruit(FILE* in_fp, FILE* out_fp, AddRecruit addRecruit, Member* loginedMember);
	~AddRecruitUI(); //�Ҹ���
};