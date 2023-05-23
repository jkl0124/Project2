#pragma once
#include "SignUp.h"
#include <iostream>
#include <string>

using namespace std;

/*
	�Լ� �̸� : SignUp::showNecessaryInfo()
	���	  : ȸ�� ���� �˷��ֱ�, ��� ����
	���� ���� : KindOfMember
	��ȯ��    : �ʿ��� ȸ�� ����
*/
string SignUp::showNecessaryInfo(int KindOfMember) {
	if (KindOfMember == 1) {
		return this->CMemberParams;
	}
	else {
		return this->GMemberParams;
	}
}

/*
	�Լ� �̸� : SignUp::addNewCMember()
	���	  : ȸ��ȸ�� ����
	���� ���� : ID, PW, CName, BNum
	��ȯ��    : ȸ��ȸ�� ������
*/
CompanyMember* SignUp::addNewCMember(string ID, string PW, string CName, string BNum, CompanyMember* Cmembers[], int* nextCMember) {
	CompanyMember* newCompanyMember = new CompanyMember(ID, PW, CName, BNum);
	Cmembers[*nextCMember] = newCompanyMember;
	(*nextCMember)++;
	return newCompanyMember;
}
/*
	�Լ� �̸� : SignUp::addNewGMember()
	���	  : ȸ��ȸ�� ����
	���� ���� : ID, PW, GName, RNum
	��ȯ��    : �Ϲ�ȸ�� ������
*/
GeneralMember* SignUp::addNewGMember(string ID, string PW, string GName, string RNum, GeneralMember* Gmembers[], int* nextGMember) {
	GeneralMember* newGeneralMember = new GeneralMember(ID, PW, GName, RNum);
	Gmembers[*nextGMember] = newGeneralMember;
	(*nextGMember)++;
	return newGeneralMember;
}
