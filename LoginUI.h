#pragma once
#include "Login.h"
#include <iostream>
#include <string>
using namespace std;
// �α��� �ٿ���� Ŭ����
class LoginUI
{
public:
	void startInterface(); // ��� ����
	// �α��� �ϱ�
	Member* selectLogin(FILE* in_fp, FILE* out_fp, Login login, CompanyMember* Cmembers[], int* nextCMember, GeneralMember* Gmembers[], int* nextGMember);

};

