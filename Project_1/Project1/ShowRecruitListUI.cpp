#include "ShowRecruitListUI.h"

ShowRecruitListUI::ShowRecruitListUI() {}

void ShowRecruitListUI::startInterface() {
}

void ShowRecruitListUI::showMyRecruits(FILE* out_fp, ShowRecruitList showRecruitList, Member* loginedMember) {
    string result_string = showRecruitList.ShowRecruit(loginedMember);
    const char* c = result_string.c_str(); // ����ȯ (string) -> (const char*)
    // ��� ����
    fprintf(out_fp, "3.2. ��ϵ� ä�� ���� ��ȸ\n");
    fprintf(out_fp, c);
}

ShowRecruitListUI::~ShowRecruitListUI() {}