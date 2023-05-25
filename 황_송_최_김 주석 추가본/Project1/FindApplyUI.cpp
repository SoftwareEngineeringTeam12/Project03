#include "FindApplyUI.h"
#include "GeneralMember.h"


/*
함수 이름 : FindApplyUI::findMyApply()
기능 : 로그인 회원이 작성한 지원서 출력
전달 인자 : output 포인터, loginmember, FindApply 컨트롤 객체
*/


void FindApplyUI::findMyApply(FILE* out_fp, Member* loginmember, FindApply findapply)
{
	
	GeneralMember* generalMember = (GeneralMember*)loginmember;//맴버를 일반회원으로 형변환
	string result = findapply.showMyApplys(generalMember);
	result += '\n';
	char stl[10000];
	fprintf(out_fp, "4. 3. 지원 정보 조회\n");   
	strcpy_s(stl, result.c_str());
	fprintf(out_fp, "> %s", stl);       //지금까지 지원한 정보들 출력
}