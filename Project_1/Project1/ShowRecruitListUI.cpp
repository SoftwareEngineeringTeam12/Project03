#include "ShowRecruitListUI.h"

ShowRecruitListUI::ShowRecruitListUI() {}

void ShowRecruitListUI::startInterface() {
}

void ShowRecruitListUI::showMyRecruits(FILE* out_fp, ShowRecruitList showRecruitList, Member* loginedMember) {
    string result_string = showRecruitList.ShowRecruit(loginedMember);
    const char* c = result_string.c_str(); // 형변환 (string) -> (const char*)
    // 출력 형식
    fprintf(out_fp, "3.2. 등록된 채용 정보 조회\n");
    fprintf(out_fp, c);
}

ShowRecruitListUI::~ShowRecruitListUI() {}