#include "CancelApply.h"

string CancelApply::cancelexistingApply(GeneralMember* Mem, string del)//½ÃÄö½º º¯°æ
{
	return Mem->deleteApply(del);
}
