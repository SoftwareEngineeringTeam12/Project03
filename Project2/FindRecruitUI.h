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
	FindRecruitUI(); //생성자 

	void startInterface();
	void registerRecruit(); // 필요없긴함

	string SearchByCName(string CName);
	~FindRecruitUI(); //소멸자
};