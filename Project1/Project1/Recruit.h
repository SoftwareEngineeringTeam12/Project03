#pragma once
#include <iostream>
#include <string>
using namespace std;
class Recruit {
private:
    int ApplyCount;
    string CName;
    string Deadline;
    int NumberofApplicants;
    string Job;

public:
    Recruit(int applyCount, const string& cname, const string& deadline, int numberOfApplicants, const string& job)
        : ApplyCount(applyCount), CName(cname), Deadline(deadline), NumberofApplicants(numberOfApplicants), Job(job) {
    }
    void getdetail() {

    }
    ~Recruit() {

    }

};
