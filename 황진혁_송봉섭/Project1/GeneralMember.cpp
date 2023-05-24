#include "GeneralMember.h"

void GeneralMember::AddNewAppply(string cname, string businessNumber, string job, int numberOfApplicants, string deadline) {
	Apply* newApply = new Apply(cname, businessNumber, job, deadline, numberOfApplicants);
	this->applys[this->Apply_index++] = newApply;
}
