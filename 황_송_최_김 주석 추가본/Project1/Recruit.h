#pragma once
#include <string.h>
#include <string>
using namespace std;

// ä�� ����
class Recruit
{
private:
	// ȸ��� , ������ �� , ������ , ���� �ο��� , ����
	string CName;
	int ApplyCount = 0;
	string Deadline;
	int NumberOfApplicants;
	string Job;


public:
	Recruit(string cname, string job, string numberOfApplicants, string deadline); //������ 

	string getRecruit();
	string getApplyCount();
	void plusApplyCount();
	void minusApplyCount();
	string getDetails();
	string getCName();
	string getJob();
	string getDeadline();
	int getNumberOfApplicants();

	~Recruit(); //�Ҹ���
};