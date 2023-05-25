#pragma once
#include <string.h>
#include <string>
#include "Recruit.h"
#include "Member.h"
using namespace std;
// 회사 회원
class CompanyMember : public Member
{
private:
	// 회사이름, 사업자번호, 자신의 채용 공고 배열, 채용 공고 배열 인덱스
	string CName;
	string BusinessNumber;
	Recruit* recruits[1];
	int Recruit_index = 0;
public:
	// 생성자
	CompanyMember(string _ID, string _PW, string _CName, string _BusinessNumber)
		: Member(_ID, _PW, 1), CName(_CName), BusinessNumber(_BusinessNumber)
	{}

	void createRecruit(string Job, string NumberOfApplicants, string Deadline);
	string listRecruit();

	string getMyRecruitDetails();

	string getMyRecruitCName();

	string getApplyRecruit();

	Recruit* getMyRecruit();//리크루트 가져오기

	string getBusinessNubmer();//채용지원
	string getCName();//채용지원

	~CompanyMember(); //소멸자
};

