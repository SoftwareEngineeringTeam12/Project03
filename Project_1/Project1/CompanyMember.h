#pragma once
#include <string>
#include "Member.h"
using namespace std;
//Member
class CompanyMember : public Member
{
private:
	string CName;
	string BusinessNumber;
public:
	// »ı¼ºÀÚ
	CompanyMember(string _ID, string _PW, string _CName, string _BusinessNumber)
		: Member(_ID, _PW), CName(_CName), BusinessNumber(_BusinessNumber)
	{}


};

