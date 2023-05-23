#include <string>
#include "FindApply.h"
using namespace std;

string FindApply::run(*GeneralMember Mem)
{	
	member = Mem;
	return showMyApplys();
}

string FindApply::showMyApplys()
{
	return member.listApplys();
}