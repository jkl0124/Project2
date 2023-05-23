#include "Login.h"

/*
    �Լ� �̸� : LoginUI::loginMember()
    ���	  : �α��� �ϱ�, ��� �迭�� ���鼭 �α��� ��� �Լ� ȣ��
    ���� ���� : ID, PW, ȸ�� ȸ�� ������ �迭, ȸ������, �Ϲ� ȸ�� ������ �迭, �Ϲ� �����
    ��ȯ��    : �α��� �ϴ� ��� ������
*/
Member* Login::loginMember(string ID, string PW, CompanyMember* Cmembers[], int* nextCMember, GeneralMember* Gmembers[], int* nextGMember) {
    bool result = false;
    for (int i = 0; i < *nextCMember; i++) {

        result = Cmembers[i]->loginMember(ID, PW);
        // �α��� ������ �ش� ������
        if (result) {
            return Cmembers[i];
        }

    }
    for (int i = 0; i < *nextGMember; i++) {

        result = Gmembers[i]->loginMember(ID, PW);
        // �α��� ������ �ش� ������
        if (result) {
            return Gmembers[i];
        }

    }
    // �ƹ��͵� ������� ���Ͽ��ٸ� nullptr�� return
    return nullptr;


}
