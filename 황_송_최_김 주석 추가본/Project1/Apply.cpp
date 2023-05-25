#pragma once
#include "Apply.h"

Apply::Apply(string _Cname, string _BusinessNumber, string _Job, string _Deadline, int _NumberofApplicants){

	this->Cname = _Cname;
	this->BusinessNumber = _BusinessNumber;
	this->Deadline = _Deadline;
	this->NumberOfApplicants = _NumberofApplicants;
	this->Job = _Job;
}


//회사이름 출력
string Apply::getApplyCname()
{
	return this->Cname;
}
//회사사업자번호 출력
string Apply::getApplyGname()
{
	return BusinessNumber;
}
//채용 업무명 출력
string Apply::getApplyJob()
{
	return Job;
}

int Apply::getApplyNumberOfApplicants()
{
	return NumberOfApplicants;
}
//마감일 출력
string Apply::getApplyDeadline()
{
	return Deadline;
}

Apply::~Apply() {
	
}