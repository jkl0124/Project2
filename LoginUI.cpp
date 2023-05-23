#include "LoginUI.h"
#define MAX_STRING 32
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
/*
	�Լ� �̸� : LoginUI::selectLogin()
	���	  : �α��� �ϱ�
	���� ���� : input ������, output ������, �α��� ��Ʈ�� Ŭ���� ��ü, ID, PW, ȸ�� ȸ�� ������ �迭, ȸ���� ��, �Ϲ� ȸ�� ������ �迭, �Ϲ� ��� ��
	��ȯ��    : �α��� �ϴ� ��� ������
*/
Member* LoginUI::selectLogin(FILE* in_fp, FILE* out_fp, Login login, CompanyMember* Cmembers[], int* nextCMember, GeneralMember* Gmembers[], int* nextGMember) {
	char id[MAX_STRING], pw[MAX_STRING];
	fscanf(in_fp, "%s %s", id, pw);

	Member* result = login.loginMember(id, pw, Cmembers, nextCMember, Gmembers, nextGMember);
	//cout << "2. 1. �α���\n > " << id << " " << pw << endl;
	fprintf(out_fp, "2. 1. �α���\n");
	fprintf(out_fp, "> %s %s\n\n", id, pw);
	return result;
}
