#include "CancelApply.h"

string CancelApply::cancelexistingApply(GeneralMember* Mem, string del)//시퀀스 변경
{
	return Mem.deleteApply(del);
}