#pragma once

#include <string.h>
#include<string>
#include "ShowRecruitList.h" // Control class
using namespace std;


class ShowRecruitListUI // Boundary class
{
private:
public:
	ShowRecruitListUI(); //������ 

	void startInterface();

	void showMyRecruits(FILE* in_fp, ShowRecruitList showRecruitList, Member* loginedMember); //string ���� main ���� ��ȯ

	~ShowRecruitListUI(); //�Ҹ���
};