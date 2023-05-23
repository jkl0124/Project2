#pragma once
#include <iostream>
#include <string>
#include "CompanyMember.h"
#include "GeneralMember.h"

using namespace std;
// ȸ������ ��Ʈ�� Ŭ����
class SignUp
{
private:
	// ���� �ʿ��� ������ �������� ������ ����
	// ��� ����
	string CMemberParams = "ID, PW, CName, BusinessNumber";
	string GMemberParams = "ID, PW, GName, RegisterNumber";
public:
	// ������ ȸ���� ���� �ʿ��� ���� �˷��ֱ�
	// ��� ����
	string showNecessaryInfo(int KindOfMember);
	// ������ ȸ�� ���� 
	CompanyMember* addNewCMember(string ID, string PW, string CName, string BNum, CompanyMember* Cmembers[], int* nextCMember);
	GeneralMember* addNewGMember(string ID, string PW, string GName, string RNum, GeneralMember* Gmembers[], int* nextGMember);

};
