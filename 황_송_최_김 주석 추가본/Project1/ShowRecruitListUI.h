#pragma once

#include <string.h>
#include<string>
#include "ShowRecruitList.h" // Control class
using namespace std;

// 등록된 채용정보 조회 (바운더리 클래스)

class ShowRecruitListUI // Boundary class
{
private:
public:
	ShowRecruitListUI(); //생성자 

	void startInterface();

	void showMyRecruits(FILE* in_fp, ShowRecruitList showRecruitList, Member* loginedMember); 

	~ShowRecruitListUI(); //소멸자
};