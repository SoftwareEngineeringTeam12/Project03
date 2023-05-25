#pragma once
#include "FIndApply.h"
#include <string>
using namespace std;

string  FindApply::showMyApplys(GeneralMember* Mem)
{	

	return Mem->listApply();
}