#pragma once
#include <string>
#include "Member.h"
#include "Apply.h"
using namespace std;
class GeneralMember : public Member
{
private:
	// 이름, 주민번호, 지원한 지원 정보 배열, 지원 정보 배열 인덱스
	string GName;
	string RegisterNumber;
	Apply* OwnApply[10];
	int OwnApplyNum = 0;
public:
	// 생성자
	GeneralMember(string _ID, string _PW, string _GName, string _RegisterNumber)
		: Member(_ID, _PW, 2), GName(_GName), RegisterNumber(_RegisterNumber)
	{}
	void AddNewAppply(string cname, string BusinessNumber, string job, int numberOfApplicants, string deadline);
	string listApply();
	string deleteApply(string del);
	string getApplyNum();
	int getOwnApplyNum();
};

