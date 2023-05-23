#include "Recruit.h"
using namespace std;

Recruit::Recruit(string job, string numberOfApplicants, string deadline) {

	Job = job;
	Deadline = deadline;
	NumberOfApplicants = stoi(numberOfApplicants);
}

string Recruit::getRecruit() {
	return Job + " " + to_string(NumberOfApplicants) + " " + Deadline;
}

string Recruit::getApplyCount() {
	return Job + " " + to_string(ApplyCount);
}

Recruit::~Recruit(){}