#pragma once
#include "Logout.h"
#include "LogoutUI.h"
#define MAX_STRING 32

/*
	�Լ� �̸� : LogoutUI::selectLogout()
	���	  : �α׾ƿ� �ϱ�
	���� ���� : output ������, �α��� �� ����� ������, �α׾ƿ� ��Ʈ�� ��ü
	��ȯ��    : 
*/
void LogoutUI::selectLogout(FILE* out_fp, Member* LoginedMember, Logout logout) {
	string result = logout.logoutMember(LoginedMember);
	char stl[MAX_STRING];
	strcpy_s(stl, result.c_str());
	fprintf(out_fp, "2. 2. �α׾ƿ�\n");
	fprintf(out_fp, "> %s\n\n", stl);

}
