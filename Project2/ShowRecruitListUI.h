#pragma once

#include <string.h>
#include<string>
#include "ShowRecruitList.h" // Control class
using namespace std;


class ShowRecruitListUI // Boundary class
{
private:
	ShowRecruitList showRecruitList; // Control class

public:
	ShowRecruitListUI(); //������ 

	void startInterface();

	string showMyRecruits(); //string ���� main ���� ��ȯ

	~ShowRecruitListUI(); //�Ҹ���
};