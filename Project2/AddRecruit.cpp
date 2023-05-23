#include "AddRecruit.h"
using namespace std;

AddRecruit::AddRecruit() {}

void AddRecruit::showRegisterRecruit() {

}


void AddRecruit::AddNewRecruit(string job, string NumberOfApplicants, string Deadline ,CompanyMember* companyMember) {
	companyMember->createRecruit(job, NumberOfApplicants, Deadline);
}

AddRecruit::~AddRecruit() // ¼Ò¸êÀÚ
{
}