#include "Withdraw.h"
#include <iostream>
#include <string>
using namespace std;
/*
	�Լ� �̸� : Withdraw::deleteMember()
	���	  : ȸ�� Ż��
	���� ���� : �α��ε� ��� ������
	��ȯ��    : ID
*/
string Withdraw::deleteMember(Member* LoginedMember) {
	string result = LoginedMember->getID();
	// �Ҹ���
	delete LoginedMember;
	// �ش� ID ��ȯ
	return result;
}
