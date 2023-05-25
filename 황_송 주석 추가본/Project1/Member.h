#pragma once
#include <string>

using namespace std;
// ȸ�� Ŭ���� ����
class Member
{
private:
	// ID�� PW�� ������ ����
	string ID;
	string PW;
	// �ش� ����� ���� ������� �˷��ִ� ����
	// 1�̸� ȸ��ȸ��, 2�̸� �Ϲ�ȸ��
	int User_type = 1;

public:
	// ������
	Member(string _ID, string _PW, int _User_type) :ID(_ID), PW(_PW), User_type(_User_type) {}
	// get �Լ���
	string getID();
	string getPW();
	int getUsertype();
	// �α���, �α׾ƿ� �Լ�
	bool loginMember(string ID, string PW);
	string logoutMember();
	// default ������
	Member() = default;
};

