#pragma once
#include "Withdraw.h"
#include "Member.h"
#include <iostream>
#include <string>
// ȸ��Ż�� �ٿ���� Ŭ����
class WithdrawUI
{
public:
	//ȸ�� Ż��
	void startInterface();
	void withdrawMember(FILE* out_fp, Member* LoginedMember, Withdraw withdraw);
};

