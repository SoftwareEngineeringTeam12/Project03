
#pragma once
//boundary class
#include <iostream>
#include <string>
#include "FindRecruit.h"


class FindRecruitUI
{
public:
    void searchByCName(char *CName) {
      
        // �ش� ��� ����  
        FindRecruit findRecruit;
        findRecruit.showRecruitByCName(CName);

    }
};