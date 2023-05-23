// ��� ����
#include <stdio.h>
#include <string.h>
#include "AddRecruitUI.h"
#include "ShowRecruitListUI.h"
#include "CompanyMember.h"


// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask();
void join();
void program_exit();

// ���� ����
FILE* in_fp, * out_fp;

int main()
{
    // ���� ������� ���� �ʱ�ȭ 
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    doTask();

    return 0;
}


void doTask()
{
    // �޴� �Ľ��� ���� level ������ ���� ����
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
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);


        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 1://ȸ������(ȸ��ȸ��,�Ϲ�ȸ��),ȸ��Ż��
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. ȸ�����ԡ� �޴� �κ�
            {
                // join() �Լ����� �ش� ��� ���� 
                join();//� stereotype? controll class�� �������� usecase�� ����� �ϳ��������°���

                break;
            }
            case 2://ȸ��Ż��
            {

                break;
            }
            }
        }

        case 2://�α���,�α׾ƿ�
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

        case 3://ä�� ���� ���,��ϵ� ä������ ��ȸ
        {
            switch (menu_level_2)
            {
            case 1://ä�� ���� ��� *********************************************************
            {
                char job[MAX_STRING], num_app[MAX_STRING], deadline[MAX_STRING];

                // �Է� ���� : �̸�, �ֹι�ȣ, ID, Password�� ���Ϸκ��� ����
                fscanf(in_fp, "%s %s %s", job, num_app, deadline);

                addRecruitUI.createNewRecruit(job, num_app, deadline , logined_Member);

                // ��� ����
                fprintf(out_fp, "3.1. ä�� ���� ���\n");
                fprintf(out_fp, "%s %s %s \n", job, num_app, deadline);

                break;
            }
            case 2: //��ϵ� ä������ ��ȸ  *********************************************************
            {
                string result_string = showRecruitListUI.showMyRecruits();
                const char* c = result_string.c_str(); // ����ȯ (string) -> (const char*)
                // ��� ����
                fprintf(out_fp, "3.2. ��ϵ� ä�� ���� ��ȸ\n");
                fprintf(out_fp, c);
                break;
            }
            }
        }
        case 4://ä�� ���� �˻�,ä�� ���� ����,���� ���� ��ȸ,���� ���� ���
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
        case 5://���� ���� ���
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
            case 1:   // "6.1. ���ᡰ �޴� �κ�
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
