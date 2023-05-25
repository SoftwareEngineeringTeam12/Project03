#include "CompanyMember.h"
using namespace std;
#include <iostream>


/*
	함수 이름 : CompanyMember::createRecruit()
	기능	  : 채용 정보 등록
	전달 인자 : 업무 , 모집 인원수 , 마감기한
	반환값    :
*/
void CompanyMember::createRecruit(string Job, string NumberOfApplicants, string Deadline) {
	// 전달된 값으로 채용 정보 생성
	Recruit* newRecruit = new Recruit(this->CName, Job, NumberOfApplicants, Deadline); 
	this->recruits[this->Recruit_index++] = newRecruit;
}

Recruit* CompanyMember::getMyRecruit() {
	return this->recruits[(this->Recruit_index) - 1];
}

/*
	함수 이름 : CompanyMember::listRecruit()
	기능	  : 등록된 채용정보 조회
	전달 인자 : 
	반환값    : 해당 회사 회원의 등록된 채용정보 string
*/
string CompanyMember::listRecruit() {

	string str = "";

	for (int i = 0; i < Recruit_index; i++)
	{
		str += recruits[i]->getRecruit() + "\n";
	}
	return str;
}

/*
	함수 이름 : CompanyMember::getApplyRecruit()
	기능	  : 업무별 지원자 수 반환 
	전달 인자 :
	반환값    : 해당 회원에 등록된 채용 공고의 업무별 지원자 수 string
*/
string CompanyMember::getApplyRecruit() {
	string str = "";
	for (int i = 0; i < Recruit_index; i++)
	{
		str += recruits[i]->getApplyCount() + "\n";
	}
	return str;

}
/*
	함수 이름 : CompanyMember::getMyRecruitCName() 
	기능	  : 회사명과 일치하는 채용정보 확인
	전달 인자 :
	반환값    : 해당 채용정보 회사명 반환
*/

string CompanyMember::getMyRecruitCName() {
	string str = "";

	for (int i = 0; i < Recruit_index; i++)
	{
		str += recruits[i]->getCName();
	}
	return str;
}

string CompanyMember::getMyRecruitDetails() {
	string str = "";
	for (int i = 0; i < Recruit_index; i++)
	{
		str += CName + " " + BusinessNumber + " " + recruits[i]->getDetails();
	}
	return str;
}

//get함수

string CompanyMember::getBusinessNubmer() {

	return this->BusinessNumber;
}
string CompanyMember::getCName() {

	return this->CName;
}


CompanyMember::~CompanyMember() {

}