#pragma once
#include "Apply.h"
#include "GeneralMember.h"
#include <vector>
#include <algorithm>

/*
	함수 이름 :  GeneralMember::AddNewAppply
	기능	  : 지원 정보 등록
	전달 인자 : 회사명, 사업자번호, 업무, 지원자 수, 마감일
	반환값    :
*/


void GeneralMember::AddNewAppply(string cname, string businessNumber, string job, int numberOfApplicants, string deadline, Recruit * rec) {
	Apply* newApply = new Apply(cname, businessNumber, job, deadline, numberOfApplicants, rec);
	this->OwnApply[this->OwnApplyNum++] = newApply;
	rec->plusApplyCount();

}


/*
	함수 : GeneralMember::listApply
	기능 : 지원서의 회사 정보를 회사 오름차순으로 반환
	반환값 : 오름차순으로 정렬된 회사정보들 반환
*/

string GeneralMember::listApply()
{
	
	string temp[100];
	int n = 0;
	

	for (int i = 0; i < OwnApplyNum; i++)
	{
		if (OwnApply[i] != nullptr)
		{
			temp[i] += OwnApply[i]->getApplyCname();
			temp[i] += " ";
			temp[i] += OwnApply[i]->getApplyGname();
			temp[i] += " ";
			temp[i] += OwnApply[i]->getApplyJob();
			temp[i] += " ";
			temp[i] += OwnApply[i]->getApplyNumberOfApplicants() + '0'; //int
			temp[i] += " ";
			temp[i] += OwnApply[i]->getApplyDeadline();
			temp[i] += '\n';
			
		}
	}
	string ans = "";
	
	sort(temp, temp + OwnApplyNum);
	for (int i = 0; i < OwnApplyNum; i++)
	{
		if(!temp[i].empty())
			ans += temp[i];
	}
	return ans;
}
int GeneralMember::getOwnApplyNum() {
	return this->OwnApplyNum;
}

/*
	함수명 : GeneralMember::deleteApply
	기능 : 사업자번호로 전달된 member삭제
	전달인자 : 삭제할 사업자번호
	반환 : 삭제된 지원정보
*/

string GeneralMember::deleteApply(string del)
{
	string temp = "";
	for (int i = 0; i < OwnApplyNum; i++)
	{
		if (OwnApply[i] && del == OwnApply[i]->getApplyGname())//사업자번호출력하는 함수 만들기
		{
			temp += OwnApply[i]->getApplyCname();
			temp += " ";
			temp += OwnApply[i]->getApplyGname();
			temp += " ";
			temp += OwnApply[i]->getApplyJob();

			delete OwnApply[i];
			OwnApply[i] = nullptr;
			break;
		}
	}
	return temp;
}
/*
	함수 : GeneralMember::getApplyNum
	기능 : 업무별로 지원횟루를 저장하고 출력
	반환 : 업무별 지원회수가 저장된 문자열
*/
string GeneralMember::getApplyNum()
{
	int Jobnum = 0;
	vector<pair<string, int>> vv;
	for (int i = 0; i < OwnApplyNum; i++)
	{
		if (OwnApply[i])
		{
			bool flag = true;
			for (int j = 0; j < Jobnum; j++)
			{
				if (vv[j].first == OwnApply[i]->getApplyJob())
				{
					vv[j].second++;
					flag = false;
					break;
				}

			}
			if (flag == true)
			{
				Jobnum++;
				vv.push_back({ OwnApply[i]->getApplyJob(),1 });//업무명반환함수 만들것
			}
		}
	}
	string temp = "";
	for (int i = 0; i < Jobnum; i++)
	{
		temp += vv[i].first;
		temp += " ";
		temp += vv[i].second+'0';
		temp += '\n';
	}
	return temp;
}