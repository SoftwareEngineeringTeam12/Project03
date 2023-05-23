#pragma once
#include <string.h>
#include <string>
#include "Recruit.h"
#include "Member.h"
using namespace std;


class CompanyMember : public Member
{
private:
	string CName; // 회사이름
	string BusinessNumber;
	Recruit* recruits[1];
	int Recruit_index;

public:
	CompanyMember(string _ID, string _PW, string _CName, string _BusinessNumber)
		: Member(_ID, _PW), CName(_CName), BusinessNumber(_BusinessNumber)
	{}

	void createRecruit(string Job, string NumberOfApplicants, string Deadline);
	string listRecruit();

	string getApplyRecruit();

	~CompanyMember(); //소멸자
};