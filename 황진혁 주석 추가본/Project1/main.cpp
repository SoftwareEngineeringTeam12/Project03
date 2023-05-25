// ��� ����
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

// ��� ����
#include <stdio.h>
#include <string.h>

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


    // ����
    doTask(in_fp, out_fp);



    return 0;
}


void doTask(FILE* in_fp, FILE* out_fp)
{
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    // ȸ��ȸ�� �迭, �ε���, �Ϲ�ȸ�� �迭, �ε���
    CompanyMember* Cmembers[100];
    int nextCMember = 0;
    GeneralMember* Gmembers[100];
    int nextGMember = 0;

    // �α��ε� ����� ����Ű�� ������
    Member* loginedMember = new Member();
    
    // ��Ʈ�� Ŭ���� ����
    SignUp signUp; // 1 1 ȸ������
    Withdraw withdraw; // 1 2ȸ��Ż��
    Login login; // 2 1�α���
    Logout logout; // 2 2�α׾ƿ�

    AddRecruit addRecruit; // 3 1 ä�� ���� ���
    ShowRecruitList showRecruitList; // 3 2 ��ϵ� ä�� ���� ��ȸ

    FindRecruit findRecruit; // 4 1 ä�� ���� �˻�
    ApplyRecruit applyRecruit; // 4 2 ä�� ����
  
    FindApply findapply; // 4 3 ���� ���� ��ȸ
    CancelApply cancelapply; // 4 4 ���� ���

    GetApplyCount getApplyCount; // 5 1 ���� ���� ��� ȸ��ȸ��
    GetGeneralApplyCount getgeneralapplycount; // 5 1 ���� ���� ��� �Ϲ�ȸ��
    
    // ���α׷��� ������ ���� �ݺ�
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
                // UI ���� 
                SignUpUI signupUI; 
                //signupUI.startInterface();
                //signUp.mysignUpUI.startInterface();
                //SignUpUI * signupUI = signUp.mysignUpUI.startInterface();
                // UI�� ���ؼ� usertype �ޱ�
                int user_type = signupUI.selectKindOfMember(in_fp, signUp);

                signupUI.createNewMember(in_fp, out_fp, user_type, signUp, Cmembers, &nextCMember, Gmembers, &nextGMember);

                break;
            }
            case 2://ȸ��Ż��
            {
                WithdrawUI withdrawUI;
                withdrawUI.withdrawMember(out_fp, loginedMember, withdraw);
                break;
            }
            }
            continue;
        }

        case 2://�α���,�α׾ƿ�
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
            case 1://ä�� ���� ��� *********************************************************
            {
                // UI ����
                AddRecruitUI addRecruitUI;

                //CompanyMember* companyMember = loginedMember;


                addRecruitUI.createNewRecruit(in_fp, out_fp, addRecruit, loginedMember);

                break;
            }
            case 2: //��ϵ� ä������ ��ȸ  *********************************************************
            {
                ShowRecruitListUI showRecruitListUI;
                showRecruitListUI.showMyRecruits(out_fp, showRecruitList, loginedMember);

                break;
            }
            }
            continue;
        }
        case 4://ä�� ���� �˻�,ä�� ���� ����,���� ���� ��ȸ,���� ���� ���
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
        case 5://���� ���� ��� *****************************************
        {
            switch (menu_level_2)
            {
            case 1:
            {
                if (loginedMember->getUsertype() == 1) {

                    //(ȸ��ȸ��)�� ���� ���� ���
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
            case 1:   // "6.1. ���ᡰ �޴� �κ�
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
    fprintf(out_fp, "6. 1. ����\n");
}