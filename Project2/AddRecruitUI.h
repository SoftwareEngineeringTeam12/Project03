#pragma once
#include <string.h>
#include<string>
#include "AddRecruit.h"
using namespace std;


class AddRecruitUI
{
private:
	AddRecruit addrecruit;
	
public:
	AddRecruitUI(); //������ 

	void startInterface();
	void registerRecruit(); // �ʿ������

	void createNewRecruit(string Job, string NumberOfApplicants, string Deadline, CompanyMember* companyMember);
	~AddRecruitUI(); //�Ҹ���
};