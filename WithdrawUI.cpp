#include "Member.h"
#include <iostream>
#include <string>
#include "WithdrawUI.h"
#define MAX_STRING 32
/*
	�Լ� �̸� : WithdrawUI::withdrawMember()
	���	  : ȸ�� Ż��, ��Ʈ�� Ŭ������ deletemember ȣ��
	���� ���� : output ������, �α��ε� ��� ������, ��Ʈ�� ��ü
	��ȯ��    : 
*/
void WithdrawUI::withdrawMember(FILE* out_fp, Member* LoginedMember, Withdraw withdraw) {
	string result = withdraw.deleteMember(LoginedMember);
	char stl[MAX_STRING];
	strcpy_s(stl, result.c_str());
	fprintf(out_fp, "1. 2. ȸ��Ż��\n");
	fprintf(out_fp, "> %s\n\n", stl);

}