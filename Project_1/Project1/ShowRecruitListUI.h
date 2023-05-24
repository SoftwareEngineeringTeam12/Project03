#pragma once

#include <string.h>
#include<string>
#include "ShowRecruitList.h" // Control class
using namespace std;


class ShowRecruitListUI // Boundary class
{
private:
public:
	ShowRecruitListUI(); //생성자 

	void startInterface();

	void showMyRecruits(FILE* in_fp, ShowRecruitList showRecruitList, Member* loginedMember); //string 으로 main 으로 반환

	~ShowRecruitListUI(); //소멸자
};