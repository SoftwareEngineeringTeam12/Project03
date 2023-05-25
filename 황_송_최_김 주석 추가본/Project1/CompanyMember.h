#pragma once
#include <string.h>
#include <string>
#include "Recruit.h"
#include "Member.h"
using namespace std;
// ȸ�� ȸ��
class CompanyMember : public Member
{
private:
	// ȸ���̸�, ����ڹ�ȣ, �ڽ��� ä�� ���� �迭, ä�� ���� �迭 �ε���
	string CName;
	string BusinessNumber;
	Recruit* recruits[1];
	int Recruit_index = 0;
public:
	// ������
	CompanyMember(string _ID, string _PW, string _CName, string _BusinessNumber)
		: Member(_ID, _PW, 1), CName(_CName), BusinessNumber(_BusinessNumber)
	{}

	void createRecruit(string Job, string NumberOfApplicants, string Deadline);
	string listRecruit();

	string getMyRecruitDetails();

	string getMyRecruitCName();

	string getApplyRecruit();

	Recruit* getMyRecruit();//��ũ��Ʈ ��������

	string getBusinessNubmer();//ä������
	string getCName();//ä������

	~CompanyMember(); //�Ҹ���
};

