#pragma once
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
public:
	Apply(string _Cname, string _BusinessNumber, string _Job, string _Deadline, int _NumberofApplicants);
	string getApplyCname();
	string getApplyGname();
	string getApplyJob();
	int getApplyNumberOfApplicants();
	string getApplyDeadline();
	~Apply();
};