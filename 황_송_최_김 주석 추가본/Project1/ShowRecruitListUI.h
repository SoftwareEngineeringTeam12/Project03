#pragma once

#include <string.h>
#include<string>
#include "ShowRecruitList.h" // Control class
using namespace std;

// ��ϵ� ä������ ��ȸ (�ٿ���� Ŭ����)

class ShowRecruitListUI // Boundary class
{
private:
public:
	ShowRecruitListUI(); //������ 

	void startInterface();

	void showMyRecruits(FILE* in_fp, ShowRecruitList showRecruitList, Member* loginedMember); 

	~ShowRecruitListUI(); //�Ҹ���
};