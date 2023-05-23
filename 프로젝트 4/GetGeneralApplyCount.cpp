#include "GetGeneralApplyConut.h"
string GetGeneralApplyCount::run(*GeneralMember Mem)
{
	member = Mem;
	return getApplyCount();
}

string GetGeneralApplyCount::getApplyCount()
{
	return Mem.getApplyNum();
}