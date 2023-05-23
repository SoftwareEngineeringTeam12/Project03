#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
string GeneralMember::listApplys(*GeneralMember mem)
{
	string temp[10];
	int n = 0;
	for (int i = 0; i < mem.nextGeneralMember; i++)
	{
		if (mem.OwnApply[i])
		{
			temp[n++]= mem.OwnApply[i].getApplyDetails();
		}
	}
	string ans = "";
	sort(temp, temp + n);
	for (int i = 0; i < n; i++)
	{
		ans += temp[i];
	}
	return ans;
}

string GeneralMember::deleteApply(string del)
{
	string temp = "";
	for (int i = 0; i < mem.nextGeneralMember; i++)
	{
		if (del == mem.OwnApply[i].getApplyGname())//사업자번호출력하는 함수 만들기
		{
			temp += delete mem.OwnApply[i];
			break;
		}
	}
	return temp;
}

string GeneralMember::getApplyNum()
{
	Jobnum = 0;
	vector<pair<string, int>> vv;
	for (int i = 0; i < mem.nextGeneralMember; i++)
	{
		if (mem.OwnApply[i])
		{
			bool flag = true;
			for (int j = 0; j < Jobnum; j++)
			{
				if (vv[j].first == OwnApply[i].GetJob())
				{
					vv[j].second++;
					flag = false;
				}

			}
			if (flag == false)
			{
				Jobnuum++;
				vv.push_back({ OwnApply[i].GetJob,1 });//업무명반환함수 만들것
			}
		}
	}
	string temp = "";
	for (int i = 0; i < Jobnum; i++)
	{
		temp += vv[i].first;
		temp += " ";
		temp += vv[i].second;
		temp += '\n';
	}
	return temp;
}

string Apply::getApplyDetails()
{
	string temp = "";
	temp+=*this.Cname;
	temp += " ";
	temp+=*this.Job;
	temp += " ";
	temp+= *this.NumberOfApplicants;
	temp += " ";
	temo += *this.Deadline;
	return temp;
}

string Apply::getdelete()
{
	string temp = "";
	temp += *this.Cname;
	temp += " ";
	temp += *this.Gname;
	temp += " ";
	temp += *this.Deadline;
	return temp;
}
Apply::~Apply()//Apply delete
{
	*this.OwnRecruit.minusApplyCount();
}

strin Apply::getApplyCount()
{
	return Job;
}

Recruit::minusApplyCount()
{
	ApplyCount--;
}

string Apply::GetJob()
{
	return Job;
}