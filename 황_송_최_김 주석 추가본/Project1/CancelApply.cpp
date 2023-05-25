#include "CancelApply.h"

/*
	함수명 : CancelApply::cancelexistingApply
	기능 : 로그인맴버의 지원서랑 사업자번호가 같으면 삭제한다.
	전달인자 : 로그인 맴버, 사업자 번호
	반환값 : 삭제된 지원서 정보(회사이름, 사업자 번호, 업무)
*/

string CancelApply::cancelexistingApply(GeneralMember* Mem, string del)//시퀀스 변경
{
	return Mem->deleteApply(del);
}
