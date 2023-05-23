
#pragma once
//boundary class
#include <iostream>
#include <string>
#include "FindRecruit.h"


class FindRecruitUI
{
public:
    void searchByCName(char *CName) {
      
        // 해당 기능 수행  
        FindRecruit findRecruit;
        findRecruit.showRecruitByCName(CName);

    }
};