#pragma once
#include <string.h>
#include<string>
#include "FindRecruit.h"
using namespace std;


class FindRecruitUI
{
private:
	FindRecruit findRecruit;

public:
	FindRecruitUI(); //������ 

	void startInterface();
	void registerRecruit(); // �ʿ������

	string SearchByCName(string CName);
	~FindRecruitUI(); //�Ҹ���
};