#pragma once
#include "Apply.h"
#include "GeneralMember.h"
#include <vector>
#include <algorithm>

void GeneralMember::AddNewAppply(string cname, string businessNumber, string job, int numberOfApplicants, string deadline) {
	Apply* newApply = new Apply(cname, businessNumber, job, deadline, numberOfApplicants);
	this->OwnApply[this->OwnApplyNum++] = newApply;

}







string GeneralMember::listApply()
{
	
	string temp[100];
	int n = 0;
	for (int i = 0; i < OwnApplyNum; i++)
	{
		if (OwnApply[i])
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
			//cout << "정렬 전 " << temp[i] << endl;
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
			break;
		}
	}
	return temp;
}

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