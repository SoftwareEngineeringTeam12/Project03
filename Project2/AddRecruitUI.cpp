#include "AddRecruitUI.h"
using namespace std;

AddRecruitUI::AddRecruitUI(){}

void AddRecruitUI::startInterface() {

}

void AddRecruitUI::registerRecruit() {

}

void AddRecruitUI::createNewRecruit(string Job, string NumberOfApplicants, string Deadline , CompanyMember* companyMember) {


	addrecruit.AddNewRecruit(Job, NumberOfApplicants, Deadline , companyMember);

}

AddRecruitUI::~AddRecruitUI() // ¼Ò¸êÀÚ
{
}