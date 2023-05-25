#include "GetApplyCountUI.h"
using namespace std;

GetApplyCountUI::GetApplyCountUI() {}

void GetApplyCountUI::startInterface() {

}

/*
    함수 이름 : GetApplyCountUI::getStatisticsRecruitNum()
    기능	  : 업무별 지원자수 통계
    전달 인자 : FILE* out_fp, GetApplyCount 컨트롤 객체, 로그인된 멤버 포인터
    반환값    : 
*/
void GetApplyCountUI::getStatisticsRecruitNum(FILE* out_fp, GetApplyCount getApplyCount, Member* loginedMember) {

    string result_string = getApplyCount.getRecruitCount(loginedMember);
    result_string = "> " + result_string + "\n";
    const char* c = result_string.c_str(); // 형변환 (string) -> (const char*)
    
    // 출력 형식
    fprintf(out_fp, "5.1. 지원 정보 통계\n");
    fprintf(out_fp, c);
}


GetApplyCountUI::~GetApplyCountUI() // 소멸자
{

}