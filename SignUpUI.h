#pragma once
#include "SignUp.h"
#include <iostream>
#include <string>
#define MAX_STRING 32

using namespace std;

// ȸ�������� ���� �ٿ���� Ŭ����
class SignUpUI
{
public:

	void startInterface(FILE* in_fp, SignUp* signUp);// �������̽� ����
	int selectKindOfMember(FILE* in_fp, SignUp signUp); // � ������ Member���� ����
	// Member ����
	void createNewMember(FILE* in_fp, FILE* out_fp, int user_type, SignUp signUp, CompanyMember* Cmembers[], int* nextCMember, GeneralMember* Gmembers[], int* nextGMember);

};
