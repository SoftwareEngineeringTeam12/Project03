#pragma once
#include <iostream>
#include "GeneralMember.h"
#include "CancelApply.h"
#include <string>
#define MAX_STRING 32
using namespace std;
class CancelApplyUI
{
public:
	void selectApplyToCancel(FILE* in_fp, FILE* out_fp, GeneralMember* loginmember, CancelApply cancelapply);
};