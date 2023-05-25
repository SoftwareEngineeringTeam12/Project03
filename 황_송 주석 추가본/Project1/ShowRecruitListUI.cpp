#include "ShowRecruitListUI.h"

ShowRecruitListUI::ShowRecruitListUI() {}

void ShowRecruitListUI::startInterface() {
}

/*
    함수 이름 : ShowRecruitListUI::showMyRecruits()
    기능	  : 등록된 채용정보 조회
    전달 인자 : FILE* out_fp, ShowRecruitList 컨트롤 객체 , 로그인된 멤버 포인터
    반환값    :
*/
void ShowRecruitListUI::showMyRecruits(FILE* out_fp, ShowRecruitList showRecruitList, Member* loginedMember) {
    string result_string = showRecruitList.ShowRecruit(loginedMember);
    result_string = "> " + result_string + "\n";
    const char* c = result_string.c_str(); // 형변환 (string) -> (const char*)
    // 출력 형식
    fprintf(out_fp, "3.2. 등록된 채용 정보 조회\n");
    fprintf(out_fp, c);
}

ShowRecruitListUI::~ShowRecruitListUI() {}