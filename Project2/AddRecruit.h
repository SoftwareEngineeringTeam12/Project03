#pragma once
#include <string.h>
#include<string>
using namespace std;
#include "CompanyMember.h"


class AddRecruit
{
private:
	CompanyMember * companyMember;

public:
	AddRecruit(); //������ 
	void showRegisterRecruit();
	void AddNewRecruit(string job, string NumberOfApplicants, string Deadline ,CompanyMember* companyMember);
	~AddRecruit(); //�Ҹ��� (������ Ŭ������ �̸� ����)
};