// ��� ����
#include <iostream>
#include <string.h>
#include <vector>
#include <stdio.h>
#include "Member.h" // ����Ʈ include


#include "AddRecruitUI.h"
#include "ShowRecruitListUI.h"
#include "GetApplyCountUI.h"

#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996)


// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask(FILE* in_fp, FILE* out_fp);
void program_exit(FILE* out_fp);

// ���� ����
FILE* in_fp, * out_fp;

int main()
{
    // ���� ������� ���� �ʱ�ȭ 
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    doTask(in_fp, out_fp);

    return 0;
}


void doTask(FILE* in_fp, FILE* out_fp)
{
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    int nextCMember = 0;
    int nextGMember = 0;
    CompanyMember* Cmembers[100];
    // GeneralMember* Gmembers[100]; �Ϲ�ȸ��
    Member* loginedMember = new Member();

    AddRecruit addRecruit; // ��Ʈ��
    ShowRecruitList showRecruitList; // ��Ʈ��
    GetApplyCount getApplyCount; // ��Ʈ��

    




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
                // UI ����
                AddRecruitUI addRecruitUI;

                //CompanyMember* companyMember = loginedMember;
               

                addRecruitUI.createNewRecruit(in_fp , out_fp, addRecruit , loginedMember);

                

                break;
            }
            case 2: //��ϵ� ä������ ��ȸ  *********************************************************
            {
                ShowRecruitListUI showRecruitListUI;
                showRecruitListUI.showMyRecruits(out_fp , showRecruitList, loginedMember);
               
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
        case 5://���� ���� ��� *****************************************
        {
            switch (menu_level_2)
            {
            case 1:
            {
                //(ȸ��ȸ��)�� ���� ���� ���
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
            case 1:   // "6.1. ���ᡰ �޴� �κ�
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
    fprintf(out_fp, "6. 1. ����\n");
}
