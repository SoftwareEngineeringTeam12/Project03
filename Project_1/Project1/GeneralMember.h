#pragma once
#include <string>
#include "Member.h"
using namespace std;
class GeneralMember : public Member
{
private:
	string GName;
	string RegisterNumber;
public:
	// »ı¼ºÀÚ
	GeneralMember(string _ID, string _PW, string _GName, string _RegisterNumber)
		: Member(_ID, _PW), GName(_GName), RegisterNumber(_RegisterNumber)
	{}

};

