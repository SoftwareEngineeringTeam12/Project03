#include "selectApplyToCancel.h"

string selectApplyToCancel::run(*GeneralMember Mem, string del)
{
	member = Mem;
	return cancelFinishedApply(*GeneralMember Mem, string del);
}

string cancelFinishedApply(string del)
{
	return member.deleteApply(del);
}