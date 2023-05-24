#pragma once
#include <string.h>
#include <string>
#include "Recruit.h"
#include "Member.h"
using namespace std;
//Member
class CompanyMember : public Member
{
private:
	string CName;
	string BusinessNumber;
	Recruit* recruits[1];
	int Recruit_index = 0;
public:
	// 持失切
	CompanyMember(string _ID, string _PW, string _CName, string _BusinessNumber)
		: Member(_ID, _PW, 1), CName(_CName), BusinessNumber(_BusinessNumber)
	{}

	void createRecruit(string Job, string NumberOfApplicants, string Deadline);
	string listRecruit();

	string findRecruitByCName(char* CName);

	string getMyRecruitDetails();

	string getMyRecruitCName();


	string getApplyRecruit();

	~CompanyMember(); //社瑚切
};

