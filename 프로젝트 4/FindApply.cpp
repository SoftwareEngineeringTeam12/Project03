#include <string>
#include "FindApply.h"
using namespace std;

void FindApply::run()
{
	showMyApplys();
	cout << endl;
}

void FindApply::showMyApplys()
{
	GeneralMember::listApplys();
}