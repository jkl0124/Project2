#pragma once

#include "Member.h"
#include "Logout.h"
/*
	�Լ� �̸� : Logout::logoutMember()
	���	  : �α׾ƿ� �ϱ�
	���� ���� : �α��� �� ����� ������
	��ȯ��    : �α׾ƿ� �� ����� id ��Ʈ�� ��ȯ
*/
string Logout::logoutMember(Member* LoginedMember) {
	// �ش� ����� logoutMember�Լ� ȣ��
	string result = LoginedMember->logoutMember();
	return result;
}
