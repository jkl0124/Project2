#include "Member.h"
#include <iostream>
#include <string>
using namespace std;

// get �Լ�
string Member::getID() {
	return this->ID;
}
string Member::getPW() {
	return this->PW;
}
/*
	�Լ� �̸� : Member::loginMember()
	���	  : �α��� �ϱ�,�Ű������� ���� ���̵� ����� ������ true
	���� ���� : ID, PW
	��ȯ��    : ��� Bool True False
*/
bool Member::loginMember(string _ID, string _PW) {
	if (getID() == _ID && getPW() == _PW) {
		return true;
	}
	else {
		return false;
	}
}
/*
	�Լ� �̸� : Member::logoutMember()
	���	  : �α׾ƿ�, �ش� ID ���
	���� ���� :
	��ȯ��    : ID
*/
string Member::logoutMember() {
	return this->getID();
}