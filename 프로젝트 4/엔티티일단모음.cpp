#include <iostream>
#include <vector>
#include <string>

GeneralMember::listApplys(*GeneralMember mem)
{
	for (int i = 0; i < mem.nextGeneralMember; i++)
	{
		if(mem.OwnApply[i])
			mem.OwnApply[i].getApplyDetails()
	}
	cout << endl;
}

GeneralMember::deleteApply(*GeneralMember mem, string del)
{
	for (int i = 0; i < mem.nextGeneralMember; i++)
	{
		if (del == mem.OwnApply[i].getApplyDetails())//사업자번호출력하는 함수 만들기
		{
			delete mem.OwnApply[i];
			break;
		}
	}
}

GeneralMember::getApplyNum(*GeneralMember mem)
{
	Jobnum = 0;
	vector<pair<string, int>> vv;
	for (int i = 0; i < mem.nextGeneralMember; i++)
	{
		if (mem.OwnApply[i])
		{
			bool flag = true;
			for (int i = 0; i < Jobnum; i++)
			{

			}
		}
	}
}

Apply::getApplyDetails()
{
	cout << "회사이름 : " << *this.Cname << endl;
	cout << "업무이름 : " << *this.Job << endl;
	cout << "인원수 : " << *this.NumberOfApplicants << endl;
	cout << "신청마감일 : " << *this.Deadline << endl;
}

Apply::~Apply()//Apply delete
{
	*this.OwnRecruit.minusApplyCount();
	cout << *this.Cname << ' ' << *this.Gname << ' ' << this.Deadline << endl;
}

Apply::getApplyCount

Recruit::minusApplyCount()
{
	ApplyCount--;
}