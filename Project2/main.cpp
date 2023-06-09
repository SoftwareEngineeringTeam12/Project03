// 헤더 선언
#include <iostream>
#include <string.h>
#include <vector>
#include <stdio.h>
#include "Member.h" // 디폴트 include


#include "AddRecruitUI.h"
#include "ShowRecruitListUI.h"
#include "GetApplyCountUI.h"

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996)


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
    // GeneralMember* Gmembers[100]; 일반회원
    Member* loginedMember = new Member();

    AddRecruit addRecruit; // 컨트롤
    ShowRecruitList showRecruitList; // 컨트롤
    GetApplyCount getApplyCount; // 컨트롤

    




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

                break;
            }
            case 2://회원탈퇴
            {

                break;
            }
            }
        }

        case 2://로그인,로그아웃
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
            }}

        case 3://채용 정보 등록,등록된 채용정보 조회
        {
            switch (menu_level_2)
            {
            case 1://채용 정보 등록 *********************************************************
            {
                // UI 생성
                AddRecruitUI addRecruitUI;

                //CompanyMember* companyMember = loginedMember;
               

                addRecruitUI.createNewRecruit(in_fp , out_fp, addRecruit , loginedMember);

                

                break;
            }
            case 2: //등록된 채용정보 조회  *********************************************************
            {
                ShowRecruitListUI showRecruitListUI;
                showRecruitListUI.showMyRecruits(out_fp , showRecruitList, loginedMember);
               
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
        case 5://지원 정보 통계 *****************************************
        {
            switch (menu_level_2)
            {
            case 1:
            {
                //(회사회원)이 지원 정보 통계
                GetApplyCountUI getApplyCountUI;
                getApplyCountUI.getStatisticsRecruitNum(out_fp, getApplyCount, loginedMember);

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

        return;
    }
}


void program_exit(FILE* out_fp)
{
    fprintf(out_fp, "6. 1. 종료\n");
}
