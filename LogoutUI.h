#pragma once

#include "Member.h"
#include "Logout.h"
#include <iostream>
#include <string>
using namespace std;
// �α׾ƿ� �ٿ���� Ŭ����
class LogoutUI
{
public:
	// �α׾ƿ� ���
	void selectLogout(FILE* out_fp, Member* LoginedMember, Logout logout);

};

