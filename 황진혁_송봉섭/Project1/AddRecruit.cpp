#include "AddRecruit.h"
using namespace std;
#include <iostream>
AddRecruit::AddRecruit() {}

void AddRecruit::showRegisterRecruit() {

}


void AddRecruit::AddNewRecruit(string job, string NumberOfApplicants, string Deadline, Member* loginedMember) {

	CompanyMember* companyMember = (CompanyMember*)loginedMember;

	companyMember->createRecruit(job, NumberOfApplicants, Deadline);
}

AddRecruit::~AddRecruit() // ¼Ò¸êÀÚ
{
}