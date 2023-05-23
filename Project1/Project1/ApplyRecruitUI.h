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

        // 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
        fscanf(in_fp, "%s ", CName);


        // 해당 기능 수행  
        ApplyRecruit applyRecruit;
        applyRecruit.showRecruitByCName(CName);

            // 출력 형식
        fprintf(out_fp, "4.1. 채용 정보 검색\n");
        fprintf(out_fp, "%s %s %s %s %s \n", CName, BusinessNumber,Job, NumberofApplicant,Deadline);
	}
};