#pragma once
#include <string.h>
#include <string>
using namespace std;

class Recruit
{
private:
	int ApplyCount = 0;
	string Deadline;
	int NumberOfApplicants;
	string Job;


public:
	Recruit(string job, string numberOfApplicants, string deadline); //������ 

	string getRecruit();
	string getApplyCount();

	string getDetails();
	string getCName();


	~Recruit(); //�Ҹ���
};