// 헤더 선언
#include <iostream>
#include <string.h>
#include <vector>
#include "Member.h"
#include "SignUpUI.h"
#include "WithdrawUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996)
// 헤더 선언
#include <stdio.h>
#include <string.h>

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask(FILE* in_fp, FILE* out_fp);
void program_exit(FILE* out_fp);

// 변수 선언
FILE* in_fp, * out_fp;

int main()
{
    // 파일 입출력을 위한 초기화 
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");

    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");



    doTask(in_fp, out_fp);



    return 0;
}






void doTask(FILE* in_fp, FILE* out_fp)
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    int nextCMember = 0;
    int nextGMember = 0;
    CompanyMember* Cmembers[100];
    GeneralMember* Gmembers[100];
    Member* loginedMember = new Member();
    SignUp signUp;
    Withdraw withdraw;
    Login login;
    Logout logout;

    while (!is_program_exit)
    //for(int i =0; i<6; i++)
    {
        // cout << nextCMember << " " << nextGMember << endl;
        // 입력파일에서 메뉴 숫자 2개를 읽기
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1://회원가입(회사회원,일반회원),회원탈퇴
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. 회원가입“ 메뉴 부분
            {
                SignUpUI signupUI;

                int user_type = signupUI.selectKindOfMember(in_fp, signUp);

                signupUI.createNewMember(in_fp, out_fp, user_type, signUp, Cmembers, &nextCMember, Gmembers, &nextGMember);

                break;
            }
            case 2://회원탈퇴
            {
                WithdrawUI withdrawUI;
                withdrawUI.withdrawMember(out_fp, loginedMember, withdraw);
                break;
            }
            }
            continue;
        }

        case 2://로그인,로그아웃
        {
            switch (menu_level_2)
            {
            case 1:
            {
                LoginUI loginUI;
                loginedMember = loginUI.selectLogin(in_fp, out_fp, login, Cmembers, &nextCMember, Gmembers, &nextGMember);
                
                break;
            }
            case 2:
            {
                LogoutUI logoutUI;
                logoutUI.selectLogout(out_fp, loginedMember, logout);
                break;
            }
            }
            continue;
        }
        case 3://채용 정보 등록,등록된 채용정보 조회
        {
            switch (menu_level_2)
            {
            case 1:
            {

                break;
            }
            case 2:
            {

                break;
            }
            }
        }
        case 4://채용 정보 검색,채용 정보 지원,지원 정보 조회,지원 정보 취소
        {
            switch (menu_level_2)
            {
            case 1:
            {

                break;
            }
            case 2:
            {

                break;
            }
            case 3:
            {

                break;
            }
            case 4:
            {

                break;
            }
            }
        }
        case 5://지원 정보 통계
        {
            switch (menu_level_2)
            {
            case 1:
            {

                break;
            }
            }
        }

        case 6:
        {
            switch (menu_level_2)
            {
            case 1:   // "6.1. 종료“ 메뉴 부분
            {

                program_exit(out_fp);
                is_program_exit = 1;
                break;
            }
            }

        }

        }
        
    }
    
}


/*

void join()
{
    /*            !!!!!!!       중요        !!!!!!!!!
     * 단순히 파일을 통해 입출력하는 방법을 보이기 위한 코드이므로 이 함수에서 그대로 사용하면 안됨.
     * control 및 boundary class를 이용해서 해당 기능이 구현되도록 해야 함.
     boundary class는 파일 읽고쓰는거만 함

    char user_type[MAX_STRING], name[MAX_STRING], SSN[MAX_STRING],
        address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];

    // 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
    fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);


    // 해당 기능 수행  


        // 출력 형식
    fprintf(out_fp, "1.1. 회원가입\n");
    fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
}

*/

void program_exit(FILE * out_fp)
{
    fprintf(out_fp, "6. 1. 종료\n");
}
/*

int main() {
	string ID = "id";
	string PW = "pw";
	int nextMember = 0;
	Member* members[100];
	int loginedMemberIndex= -1;

	SignUpUI newSignUpUI;
	int kind = 1;
	bool result;

	result = newSignUpUI.selectKindOfMember(kind);
	//cout << result << endl;
	if (kind == 1) {
		Member* newMember = newSignUpUI.createNewCMember("id", "pw", "cname", "bnum");

		members[nextMember++] = newMember;
		string result2;
		result2 = newMember->getID();
		cout << result2 << endl;
	}
	else {
		Member* newMember2 = newSignUpUI.createNewGMember("id", "pw", "cname", "bnum");
		members[nextMember++] = newMember2;
		string result2;
		result2 = newMember2->getID();
		cout << result2 << endl;
	}


	LoginUI loginui;

	loginedMemberIndex = loginui.selectLogin("id", "pw", members, nextMember);
	//cout << loginedMemberIndex << endl;
	/*
	WithdrawUI newWithdrawUI;
	loginedMemberIndex  = newWithdrawUI.withdrawMember(members[loginedMemberIndex]);
	
	
	
	LogoutUI logoutui;
	loginedMemberIndex = logoutui.selectLogout(members[loginedMemberIndex]);
	//cout << loginedMemberIndex << endl;
	
}
*/