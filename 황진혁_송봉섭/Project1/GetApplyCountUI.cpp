#include "GetApplyCountUI.h"
using namespace std;

GetApplyCountUI::GetApplyCountUI() {}

void GetApplyCountUI::startInterface() {

}

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