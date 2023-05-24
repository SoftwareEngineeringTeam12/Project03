#pragma once
#include <string.h>
#include<string>
using namespace std;
#include "CompanyMember.h"


class AddRecruit
{
private:
public:
	AddRecruit(); //생성자 
	void showRegisterRecruit();
	void AddNewRecruit(string job, string NumberOfApplicants, string Deadline ,Member* loginedMember);
	~AddRecruit(); //소멸자 (생성자 클래스와 이름 같음)
};