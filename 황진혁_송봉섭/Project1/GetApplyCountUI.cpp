#include "GetApplyCountUI.h"
using namespace std;

GetApplyCountUI::GetApplyCountUI() {}

void GetApplyCountUI::startInterface() {

}

void GetApplyCountUI::getStatisticsRecruitNum(FILE* out_fp, GetApplyCount getApplyCount, Member* loginedMember) {

    string result_string = getApplyCount.getRecruitCount(loginedMember);
    result_string = "> " + result_string + "\n";
    const char* c = result_string.c_str(); // ����ȯ (string) -> (const char*)
    
    // ��� ����
    fprintf(out_fp, "5.1. ���� ���� ���\n");
    fprintf(out_fp, c);

}


GetApplyCountUI::~GetApplyCountUI() // �Ҹ���
{

}