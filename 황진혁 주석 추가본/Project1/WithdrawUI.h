#pragma once
#include "Withdraw.h"
#include "Member.h"
#include <iostream>
#include <string>
// È¸¿øÅ»Åð ¹Ù¿î´õ¸® Å¬·¡½º
class WithdrawUI
{
public:
	//È¸¿ø Å»Åð
	void startInterface();
	void withdrawMember(FILE* out_fp, Member* LoginedMember, Withdraw withdraw);
};

