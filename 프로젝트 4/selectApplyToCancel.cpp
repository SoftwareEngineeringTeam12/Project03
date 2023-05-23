#include "selectApplyToCancel.h"

void selectApplyToCancel::run()
{
	cancelFinishedApply();
}

void cancelFinishedApply()
{
	string temp;
	cin >> temp;
	GeneralMember::deleteApply(temp);
}