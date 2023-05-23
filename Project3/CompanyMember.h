#pragma once
#include <string>
#include "Member.h"
using namespace std;
class CompanyMember : public Member
{
private:
	string CName;
	string BusinessNumber;
public:
	CompanyMember(string _ID, string _PW, string _CName, string _BusinessNumber)
		: Member(_ID, _PW), CName(_CName), BusinessNumber(_BusinessNumber)
	{}


};

