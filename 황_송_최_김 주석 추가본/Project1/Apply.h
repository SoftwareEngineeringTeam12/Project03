#pragma once
#include "Recruit.h"
#include <iostream>
#include <string>
using namespace std;
class Apply
{
	string Cname;
	string BusinessNumber;
	string Deadline;
	int NumberOfApplicants;
	string Job;
	Recruit* OwnRecruit;
public:
	Apply(string _Cname, string _BusinessNumber, string _Job, string _Deadline, int _NumberofApplicants, Recruit* rec);
	string getApplyCname();
	string getApplyGname();
	string getApplyJob();
	int getApplyNumberOfApplicants();
	string getApplyDeadline();
	~Apply();
};