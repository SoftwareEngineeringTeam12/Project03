#pragma once
#include <string>
#include "Member.h"
#include "Apply.h"
using namespace std;
class GeneralMember : public Member
{
private:
	// �̸�, �ֹι�ȣ, ������ ���� ���� �迭, ���� ���� �迭 �ε���
	string GName;
	string RegisterNumber;
	Apply* OwnApply[10];
	int OwnApplyNum = 0;
public:
	// ������
	GeneralMember(string _ID, string _PW, string _GName, string _RegisterNumber)
		: Member(_ID, _PW, 2), GName(_GName), RegisterNumber(_RegisterNumber)
	{}
	void AddNewAppply(string cname, string BusinessNumber, string job, int numberOfApplicants, string deadline);
	string listApply(); //������ ���� ���
	string deleteApply(string del); //�������� ����
	string getApplyNum(); //���� ����� 
	int getOwnApplyNum();
};

