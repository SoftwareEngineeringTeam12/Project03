#include "CancelApplyUI.h"
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
/*
	함수 이름 : CancelApplyUI::startInterface()
	기능	  : 메뉴 출력용 함수, 출력 안함
	전달 인자 :
	반환값    :
*/
void CancelApplyUI::startInterface() {

}
/*
함수 이름 : FindApplyUI::findMyApply()
기능 : 로그인 회원이 작성한 지원서 출력
전달 인자 : output 포인터, loginmember, FindApply 컨트롤 객체
*/

void CancelApplyUI::selectApplyToCancel(FILE* in_fp, FILE* out_fp, Member* loginmember, CancelApply cancelapply)
{
	GeneralMember* generalmember = (GeneralMember*)loginmember; //맴버를 일반맴버로 형변환
	string del;
	char delc[32];
	fscanf(in_fp, "%s ", delc);   //삭제할 사업자번호 입력받기
	del = delc;
	
	string result = cancelapply.cancelexistingApply(generalmember, del);
	char stl[MAX_STRING];
	strcpy_s(stl, result.c_str());
	fprintf(out_fp, "4.4. 지원 정보 취소\n");       
	fprintf(out_fp, "> %s\n\n", stl);//삭제한 회사정보 출력
}
