#pragma once
#include "SignUpUI.h"
#include <iostream>
#include <string.h>
#include <vector>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

void SignUpUI::startInterface(FILE* in_fp, SignUp* signUp) {// �������̽� ����
}


/*
	�Լ� �̸� : SignUpUI::selectKindOfMember()
	���	  : � ������ ȸ���������� ����
	���� ���� : input ������, SignUp ��Ʈ�� ��ü
	��ȯ��    : � Member���� ����
*/
int SignUpUI::selectKindOfMember(FILE* in_fp, SignUp signUp) {
	int user_type;
	fscanf(in_fp, "%d ", &user_type);
	string params = signUp.showNecessaryInfo(user_type);
	return user_type;

}
/*
	�Լ� �̸� : SignUpUI::createNewMember()
	���	  : ȸ������
	���� ���� : input ������, output ������, user type, SignUp ��Ʈ�� ��ü, ȸ�� ȸ�� ������ �迭, ȸ������, �Ϲ� ȸ�� ������ �迭, �Ϲ� �����
	��ȯ��    : 
*/
void SignUpUI::createNewMember(FILE* in_fp, FILE* out_fp, int user_type, SignUp signUp, CompanyMember* Cmembers[], int* nextCMember, GeneralMember* Gmembers[], int* nextGMember)
{
	string* arr = new string[4];  // �������� �迭 ����

	char name[MAX_STRING], num[MAX_STRING], id[MAX_STRING], pw[MAX_STRING];
	fscanf(in_fp, "%s %s %s %s", name, num, id, pw);
	// ��Ʈ������ ���ϰ� ��ȯ
	arr[0] = name;
	arr[1] = num;
	arr[2] = id;
	arr[3] = pw;
	//cout << "1. 1. ȸ������\n > "<< user_type << " " << name << " " << num << " " << id << " " << pw << endl;
	if (user_type == 1) {
		CompanyMember* newMember = signUp.addNewCMember(id, pw, name, num, Cmembers, nextCMember);

	}
	else {
		GeneralMember* newMember = signUp.addNewGMember(id, pw, name, num, Gmembers, nextGMember);
	}

	fprintf(out_fp, "1.1. ȸ������\n");
	fprintf(out_fp, "> %d %s %s %s %s\n\n", user_type, name, num, id, pw);

}
/*
void SignUpUI::startInterface(FILE* in_fp) {
	int user_type;
	fscanf(in_fp, "%d ", user_type);
	bool result;
	result = this->selectKindOfMember(user_type);
	if (result == false) {
		return;
	}
	char name[MAX_STRING], num[MAX_STRING], id[MAX_STRING], pw[MAX_STRING];
	fscanf(in_fp, "%s %s %s %s", name, num, id, pw);

	return;
}
*/