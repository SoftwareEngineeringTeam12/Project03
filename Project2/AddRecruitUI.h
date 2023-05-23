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
	AddRecruitUI(); //생성자 

	void startInterface();
	void registerRecruit(); // 필요없긴함

	void createNewRecruit(string Job, string NumberOfApplicants, string Deadline, CompanyMember* companyMember);
	~AddRecruitUI(); //소멸자
};