// 헤더 선언
#include <stdio.h>
#include <string.h>
#include "AddRecruitUI.h"
#include "ShowRecruitListUI.h"
#include "CompanyMember.h"


// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void join();
void program_exit();

// 변수 선언
FILE* in_fp, * out_fp;

int main()
{
    // 파일 입출력을 위한 초기화 
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    doTask();

    return 0;
}


void doTask()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    AddRecruitUI addRecruitUI;
    ShowRecruitListUI showRecruitListUI;


    CompanyMember* companyMembers[100];
    int companyMember_index = 0;

    
    CompanyMember* logined_Member;

    companyMembers[0] = new CompanyMember();


    logined_Member = companyMembers[0];



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
                // join() 함수에서 해당 기능 수행 
                join();//어떤 stereotype? controll class를 만들어야함 usecase당 컨드롤 하나씩나오는거임

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
                char job[MAX_STRING], num_app[MAX_STRING], deadline[MAX_STRING];

                // 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
                fscanf(in_fp, "%s %s %s", job, num_app, deadline);

                addRecruitUI.createNewRecruit(job, num_app, deadline , logined_Member);

                // 출력 형식
                fprintf(out_fp, "3.1. 채용 정보 등록\n");
                fprintf(out_fp, "%s %s %s \n", job, num_app, deadline);

                break;
            }
            case 2: //등록된 채용정보 조회  *********************************************************
            {
                string result_string = showRecruitListUI.showMyRecruits();
                const char* c = result_string.c_str(); // 형변환 (string) -> (const char*)
                // 출력 형식
                fprintf(out_fp, "3.2. 등록된 채용 정보 조회\n");
                fprintf(out_fp, c);
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

                program_exit();
                is_program_exit = 1;
                break;
            }
            }

        }

        }

        return;
    }
}





void program_exit()
{

}
