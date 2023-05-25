#pragma once
#pragma once
#include "FIndApply.h"
#include "Member.h"
#include <iostream>
class FindApplyUI
{
public:
	void startInterface(); // 출력 안함

	void findMyApply(FILE* out_fp, Member* loginmember, FindApply findapply);
};