#pragma once
#pragma once
#include "FIndApply.h"
#include "Member.h"
#include <iostream>
class FindApplyUI
{
public:
	void startInterface(); // ��� ����

	void findMyApply(FILE* out_fp, Member* loginmember, FindApply findapply);
};