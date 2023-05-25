#include "GetGeneralApplyCount.h"
#include <string>
#include <iostream>
using namespace std;

string GetGeneralApplyCount::getApplyCount(GeneralMember* Mem)
{
	return Mem->getApplyNum();
}