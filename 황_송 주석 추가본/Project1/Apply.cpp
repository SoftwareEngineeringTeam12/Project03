#pragma once
#include "Apply.h"

Apply::Apply(string _Cname, string _BusinessNumber, string _Job, string _Deadline, int _NumberofApplicants){

	this->Cname = _Cname;
	this->BusinessNumber = _BusinessNumber;
	this->Deadline = _Deadline;
	this->NumberOfApplicants = _NumberofApplicants;
	this->Job = _Job;
}


//get ÇÔ¼ö
string Apply::getApplyCname()
{
	return this->Cname;
}
string Apply::getApplyGname()
{
	return BusinessNumber;
}
string Apply::getApplyJob()
{
	return Job;
}
int Apply::getApplyNumberOfApplicants()
{
	return NumberOfApplicants;
}
string Apply::getApplyDeadline()
{
	return Deadline;
}

Apply::~Apply() {
	
}