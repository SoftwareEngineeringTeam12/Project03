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
	ShowRecruitListUI(); //생성자 

	void startInterface();

	string showMyRecruits(); //string 으로 main 으로 반환

	~ShowRecruitListUI(); //소멸자
};