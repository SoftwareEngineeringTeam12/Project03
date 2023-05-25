#pragma once
#include <string.h>
#include <string>
using namespace std;

// 채용 정보
class Recruit
{
private:
	// 회사명 , 지원자 수 , 마감일 , 모집 인원수 , 업무
	string CName;
	int ApplyCount = 0;
	string Deadline;
	int NumberOfApplicants;
	string Job;


public:
	Recruit(string cname, string job, string numberOfApplicants, string deadline); //생성자 

	string getRecruit();
	string getApplyCount();
	void plusApplyCount();
	void minusApplyCount();
	string getDetails();
	string getCName();
	string getJob();
	string getDeadline();
	int getNumberOfApplicants();

	~Recruit(); //소멸자
};