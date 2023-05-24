#pragma once
#include <string>
#include "Member.h"
#include "Apply.h"
using namespace std;
class GeneralMember : public Member
{
private:
	string GName;
	string RegisterNumber;
	Apply* OwnApply[100];
	int OwnApplyNum = 0;
public:
	// »ý¼ºÀÚ
	GeneralMember(string _ID, string _PW, string _GName, string _RegisterNumber)
		: Member(_ID, _PW, 2), GName(_GName), RegisterNumber(_RegisterNumber)
	{}
	void AddNewAppply(string cname, string BusinessNumber, string job, int numberOfApplicants, string deadline);
	string listApply();
	string deleteApply(string del);
	string getApplyNum();
	int getOwnApplyNum();
};

