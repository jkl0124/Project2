#include <iostream>
#include <string>
#include "CompanyMember.h"
#include "GeneralMember.h"

// �α��� ��Ʈ�� Ŭ����
class Login
{
public:
	// �α����ϱ�
	Member* loginMember(string ID, string PW, CompanyMember* Cmembers[], int* nextCMember, GeneralMember* Gmembers[], int* nextGMember);
};

