#include "CancelApply.h"

string CancelApply::cancelexistingApply(GeneralMember* Mem, string del)//������ ����
{
	return Mem.deleteApply(del);
}