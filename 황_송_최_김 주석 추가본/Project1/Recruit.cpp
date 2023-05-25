#include "Recruit.h"
using namespace std;
#include <iostream>


Recruit::Recruit(string cname, string job, string numberOfApplicants, string deadline) {

	this->CName = cname;
	this->Job = job;
	this->Deadline = deadline;
	this->NumberOfApplicants = stoi(numberOfApplicants);
}

void Recruit::plusApplyCount() {
	this->ApplyCount++;
}
void Recruit::minusApplyCount() {
	this->ApplyCount--;
}

/*
	함수 이름 : Recruit::getRecruit()
	기능	  : 채용 정보 조회
	전달 인자 :
	반환값    : 업무 , 모집인원수 , 마감일을 한 string으로 반환
*/
string Recruit::getRecruit() {
	return Job + " " + to_string(NumberOfApplicants) + " " + Deadline;
}
/*
	함수 이름 : Recruit::getApplyCount()
	기능	  : 회사 회원이 지원 정보 통계할때 업무 + 지원자수를 반환
	전달 인자 :
	반환값    : 업무 , 지원자수를 한 string 으로 출력
*/
string Recruit::getApplyCount() {
	return Job + " " + to_string(ApplyCount);
}
/*
	함수 이름 : Recruit::getDetails()
	기능	  : 채용 정보 검색
	전달 인자 :
	반환값    : 업무 , 모집인원수 , 마감일을 한 string으로 반환
*/
string Recruit::getDetails() {
	//[회사이름] [사업자번호] [업무] [인원 수] [신청마감일] }*
	return Job + " " + to_string(NumberOfApplicants) + " " + Deadline;
}

//get 함수
string Recruit::getJob() {
	return Job;
}
string Recruit::getDeadline() {
	return Deadline;
}

int Recruit::getNumberOfApplicants() {
	return NumberOfApplicants;
}

string Recruit::getCName() {
	return CName;
}



Recruit::~Recruit() {}