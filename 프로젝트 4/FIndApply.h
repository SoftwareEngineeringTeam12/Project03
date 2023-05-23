#pragma once
#pragma once
#include <iostream>
using namespace std;
#define NUMBER_OF_TABLE_ENTRIES 100 // event-action table의 현재 entry 갯수
#define MAX_NUMBER_OF_ACTIONS 3 // transition 시 실행되는 최대 action 갯수


class FindApply
{
	void showMyApplys();//내가 지원한 정보를 출력해줘
public:
	void run();
};