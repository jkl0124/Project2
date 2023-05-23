#pragma once
#include <string>

using namespace std;
// ȸ�� Ŭ���� ����
class Member
{
private:
	// ID�� PW�� ������ ����
	string ID;
	string PW;

public:
	// ������
	Member(string _ID, string _PW) :ID(_ID), PW(_PW) {}
	// get �Լ���
	string getID();
	string getPW();
	// �α���, �α׾ƿ� �Լ�
	bool loginMember(string ID, string PW);
	string logoutMember();

	Member() = default;
};

