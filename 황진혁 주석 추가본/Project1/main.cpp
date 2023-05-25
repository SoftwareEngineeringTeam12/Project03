// 헤더 선언
#include <iostream>
#include <string.h>
#include <vector>
#include "Member.h"
#include "SignUpUI.h"
#include "WithdrawUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "GetApplyCountUI.h"
#include "FindRecruitUI.h"
#include "AddRecruitUI.h"
#include "ShowRecruitListUI.h"
#include"ApplyRecruitUI.h"
#include "FindApply.h"
#include "FindApplyUI.h"
#include "CancelApplyUI.h"
#include "GetGeneralApplyCountUI.h"
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


    // 실행
    doTask(in_fp, out_fp);



    return 0;
}


void doTask(FILE* in_fp, FILE* out_fp)
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    // 회사회원 배열, 인덱스, 일반회원 배열, 인덱스
    CompanyMember* Cmembers[100];
    int nextCMember = 0;
    GeneralMember* Gmembers[100];
    int nextGMember = 0;

    // 로그인된 멤버를 가르키는 포인터
    Member* loginedMember = new Member();
    
    // 컨트롤 클래스 생성
    SignUp signUp; // 1 1 회원가입
    Withdraw withdraw; // 1 2회원탈퇴
    Login login; // 2 1로그인
    Logout logout; // 2 2로그아웃

    AddRecruit addRecruit; // 3 1 채용 정보 등록
    ShowRecruitList showRecruitList; // 3 2 등록된 채용 정보 조회

    FindRecruit findRecruit; // 4 1 채용 정보 검색
    ApplyRecruit applyRecruit; // 4 2 채용 지원
  
    FindApply findapply; // 4 3 지원 정보 조회
    CancelApply cancelapply; // 4 4 지원 취소

    GetApplyCount getApplyCount; // 5 1 지원 정보 통계 회사회원
    GetGeneralApplyCount getgeneralapplycount; // 5 1 지원 정보 통계 일반회원
    
    // 프로그램이 끝날때 까지 반복
    while (!is_program_exit)
    {   
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
                // UI 생성 
                SignUpUI signupUI; 
                //signupUI.startInterface();
                //signUp.mysignUpUI.startInterface();
                //SignUpUI * signupUI = signUp.mysignUpUI.startInterface();
                // UI를 통해서 usertype 받기
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
        case 3:{
            switch (menu_level_2)
            {
            case 1://채용 정보 등록 *********************************************************
            {
                // UI 생성
                AddRecruitUI addRecruitUI;

                //CompanyMember* companyMember = loginedMember;


                addRecruitUI.createNewRecruit(in_fp, out_fp, addRecruit, loginedMember);

                break;
            }
            case 2: //등록된 채용정보 조회  *********************************************************
            {
                ShowRecruitListUI showRecruitListUI;
                showRecruitListUI.showMyRecruits(out_fp, showRecruitList, loginedMember);

                break;
            }
            }
            continue;
        }
        case 4://채용 정보 검색,채용 정보 지원,지원 정보 조회,지원 정보 취소
        {
            switch (menu_level_2)
            {
            case 1:
            { 
                FindRecruitUI findRecruitUI;
                findRecruitUI.searchByCName(in_fp, out_fp, findRecruit, Cmembers, nextCMember);

                break;
            }
            case 2:
            {
                ApplyRecruitUI applyRecruitUI;
                applyRecruitUI.applyRecruit(in_fp, out_fp, applyRecruit, Cmembers, nextCMember, loginedMember);//in_fp business number
                GeneralMember* generalMember = (GeneralMember*)loginedMember;
                
                break;
            }
            case 3:
            {
                FindApplyUI findapplyui;
                findapplyui.findMyApply(out_fp, loginedMember, findapply);
                break;
            }
            case 4:
            {
                CancelApplyUI cancelapplyui;

                cancelapplyui.selectApplyToCancel(in_fp, out_fp, loginedMember, cancelapply);
                break;
            }
            }
            continue;
        }
        case 5://지원 정보 통계 *****************************************
        {
            switch (menu_level_2)
            {
            case 1:
            {
                if (loginedMember->getUsertype() == 1) {

                    //(회사회원)이 지원 정보 통계
                    GetApplyCountUI getApplyCountUI;
                    getApplyCountUI.getStatisticsRecruitNum(out_fp, getApplyCount, loginedMember);
                }
                else {
                    GetGeneralApplyCountUI getgeneralapplycountui;
                    getgeneralapplycountui.getStatisticApplyNum(out_fp, loginedMember, getgeneralapplycount);
                }

                break;
            }
            }
            continue;
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


void program_exit(FILE* out_fp)
{
    fprintf(out_fp, "6. 1. 종료\n");
}