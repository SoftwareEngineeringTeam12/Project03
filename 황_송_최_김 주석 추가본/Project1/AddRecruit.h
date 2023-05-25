#pragma once
#include <string.h>
#include<string>
using namespace std;
#include "CompanyMember.h"

// 채용 정보 등록 (컨트롤 클래스)
class AddRecruit
{
private:
public:
	AddRecruit(); //생성자 
	void AddNewRecruit(string job, string NumberOfApplicants, string Deadline, Member* loginedMember);
	~AddRecruit(); //소멸자 (생성자 클래스와 이름 같음)
};