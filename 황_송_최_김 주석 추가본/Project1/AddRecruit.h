#pragma once
#include <string.h>
#include<string>
using namespace std;
#include "CompanyMember.h"

// ä�� ���� ��� (��Ʈ�� Ŭ����)
class AddRecruit
{
private:
public:
	AddRecruit(); //������ 
	void AddNewRecruit(string job, string NumberOfApplicants, string Deadline, Member* loginedMember);
	~AddRecruit(); //�Ҹ��� (������ Ŭ������ �̸� ����)
};