#include "GetGeneralApplyCountUI.h"
/*
	함수 이름 : GetGeneralApplyCountUI::startInterface()
	기능	  : 메뉴 출력용 함수, 출력 안함
	전달 인자 :
	반환값    :
*/
void GetGeneralApplyCountUI::startInterface() {

}
/*
	함수명	 : GetGeneralApplyCountUI::getStatisticApplyNum
	기능	 : 로그인 일반 회원의 지원 통계 출력
	함수인자 : output 포인터, 로그인 맴버, GetGeneralApplyCount 컨트롤 객체
*/
void GetGeneralApplyCountUI::getStatisticApplyNum(FILE* out_fp, Member* loginmember, GetGeneralApplyCount getgeneralapplycount)
{
	GeneralMember* generalmember = (GeneralMember*)loginmember;   //맴버를 일반회원으로 형변환
	string result = getgeneralapplycount.getApplyCount(generalmember);
	char stl[MAX_STRING];
	strcpy_s(stl, result.c_str());
	fprintf(out_fp, "5.1. 지원 정보 통계\n");
	fprintf(out_fp, "> %s\n", stl);    //지원 통계 출력
}
