#pragma once
#include "Withdraw.h"
#include "Member.h"
#include <iostream>
#include <string>
// 회원탈퇴 바운더리 클래스
class WithdrawUI
{
public:
	void withdrawMember(FILE* out_fp, Member* LoginedMember, Withdraw withdraw);
};

