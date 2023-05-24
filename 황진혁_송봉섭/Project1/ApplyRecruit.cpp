#include "CompanyMember.h"
#include "GeneralMember.h"
#include <iostream>
#include <string>
#include"ApplyRecruit.h"

using namespace std;
string ApplyRecruit::addApply(string BusinessNumber, CompanyMember* Cmembers[], int nextCMember, Member* loginedMember) {


	string result = "";
	Recruit* rec;
	for (int i = 0; i < nextCMember; i++)
	{
		if (Cmembers[i]->getBusinessNubmer() == BusinessNumber) {
			//companymember에 리크루트정보가져오기 general 에 정보 넘겨주기,newapply생성
			rec = Cmembers[i]->getMyRecruit();
			GeneralMember* generalMember = (GeneralMember*)loginedMember;
			generalMember->AddNewAppply(rec->getCName(), BusinessNumber, rec->getJob(), rec->getNumberOfApplicants(), rec->getDeadline());
			result += Cmembers[i]->getCName() + Cmembers[i]->getBusinessNubmer() + rec->getJob() + "\n";
		}

	}

	return result;
}
