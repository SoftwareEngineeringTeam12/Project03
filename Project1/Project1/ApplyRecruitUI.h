#pragma once
//boundary class
#include <iostream>
#include <string>
#include "ApplyRecruit.h"
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

class ApplyRecruitUI
{
public:
	void searchByCName() {
        char  CName[MAX_STRING],BusinessNumber[MAX_STRING],
            Job[MAX_STRING], NumberofApplicant[MAX_STRING],Deadline[MAX_STRING];

        // �Է� ���� : �̸�, �ֹι�ȣ, ID, Password�� ���Ϸκ��� ����
        fscanf(in_fp, "%s ", CName);


        // �ش� ��� ����  
        ApplyRecruit applyRecruit;
        applyRecruit.showRecruitByCName(CName);

            // ��� ����
        fprintf(out_fp, "4.1. ä�� ���� �˻�\n");
        fprintf(out_fp, "%s %s %s %s %s \n", CName, BusinessNumber,Job, NumberofApplicant,Deadline);
	}
};