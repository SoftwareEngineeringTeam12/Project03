#pragma once
#include <string.h>
#include <string>
using namespace std;

class Recruit
{
private:
	string CName;
	int ApplyCount = 0;
	string Deadline;
	int NumberOfApplicants;
	string Job;


public:
	Recruit(string cname,string job, string numberOfApplicants, string deadline); //持失切 

	string getRecruit();
	string getApplyCount();

	string getDetails();
	string getCName();


	~Recruit(); //社瑚切
};