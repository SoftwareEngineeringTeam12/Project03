#include "LoginUI.h"
#define MAX_STRING 32
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
/*
	함수 이름 : LoginUI::selectLogin()
	기능	  : 로그인 하기
	전달 인자 : input 포인터, output 포인터, 로그인 컨트롤 클래스 객체, ID, PW, 회사 회원 포인터 배열, 회사멤버 수, 일반 회원 포인터 배열, 일반 멤버 수
	반환값    : 로그인 하는 멤버 포인터
*/
Member* LoginUI::selectLogin(FILE* in_fp, FILE* out_fp, Login login, CompanyMember* Cmembers[], int* nextCMember, GeneralMember* Gmembers[], int* nextGMember) {
	char id[MAX_STRING], pw[MAX_STRING];
	fscanf(in_fp, "%s %s", id, pw);

	Member* result = login.loginMember(id, pw, Cmembers, nextCMember, Gmembers, nextGMember);
	//cout << "2. 1. 로그인\n > " << id << " " << pw << endl;
	fprintf(out_fp, "2. 1. 로그인\n");
	fprintf(out_fp, "> %s %s\n\n", id, pw);
	return result;
}
