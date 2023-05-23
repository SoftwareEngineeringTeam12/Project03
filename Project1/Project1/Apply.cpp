#include <iostream>
#include <string>

using namespace std;


class Apply {
private:
    string CName;
    string GName;
    string Deadline;
    int NumberofApplicant;
    string Job;

public:
    Apply(const string& cname, const string& gname, const string& deadline, int numberOfApplicant, const string& job)
        : CName(cname), GName(gname), Deadline(deadline), NumberofApplicant(numberOfApplicant), Job(job) {}

    ~Apply(){}
};