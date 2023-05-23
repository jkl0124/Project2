// ��� ����
#include <iostream>
#include <string.h>
#include <vector>
#include "Member.h"
#include "SignUpUI.h"
#include "WithdrawUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "FindApplyUI.h"
#include "CancelApplyUI.h"
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996)

// ��� ����
#include <stdio.h>
#include <string.h>

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask(FILE* in_fp, FILE* out_fp);
void program_exit(FILE* out_fp);

// ���� ����
FILE* in_fp, * out_fp;

int main()
{
    // ���� ������� ���� �ʱ�ȭ 
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");

    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");



    doTask(in_fp, out_fp);



    return 0;
}


void doTask(FILE* in_fp, FILE* out_fp)
{
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    int nextCMember = 0;
    int nextGMember = 0;
    CompanyMember* Cmembers[100];
    GeneralMember* Gmembers[100];
    Member* loginedMember = new Member();
    SignUp signUp;
    Withdraw withdraw;
    Login login;
    Logout logout;
    FindApply findapply;
    CancelApply cancelapply;
    while (!is_program_exit)
        //for(int i =0; i<6; i++)
    {
        // cout << nextCMember << " " << nextGMember << endl;
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 1://ȸ������(ȸ��ȸ��,�Ϲ�ȸ��),ȸ��Ż��
        {
            switch (menu_level_2)
            {
            case 1:   // "1.1. ȸ�����ԡ� �޴� �κ�
            {
                // UI ����
                SignUpUI signupUI;
                // UI�� ���ؼ� usertype �ޱ�
                int user_type = signupUI.selectKindOfMember(in_fp, signUp);

                signupUI.createNewMember(in_fp, out_fp, user_type, signUp, Cmembers, &nextCMember, Gmembers, &nextGMember);

                break;
            }
            case 2://ȸ��Ż��
            {
                WithdrawUI withdrawUI;
                withdrawUI.withdrawMember(out_fp, loginedMember, withdraw);
                break;
            }
            }
            continue;
        }

        case 2://�α���,�α׾ƿ�
        {
            switch (menu_level_2)
            {
            case 1:
            {
                LoginUI loginUI;
                loginedMember = loginUI.selectLogin(in_fp, out_fp, login, Cmembers, &nextCMember, Gmembers, &nextGMember);

                break;
            }
            case 2:
            {
                LogoutUI logoutUI;
                logoutUI.selectLogout(out_fp, loginedMember, logout);
                break;
            }
            }
            continue;
        }
        case 3://ä�� ���� ���,��ϵ� ä������ ��ȸ
        {
            switch (menu_level_2)
            {
            case 1:
            {

                break;
            }
            case 2:
            {

                break;
            }
            }
        }
        case 4://ä�� ���� �˻�,ä�� ���� ����,���� ���� ��ȸ,���� ���� ���
        {
            switch (menu_level_2)
            {
            case 1:
            {

                break;
            }
            case 2:
            {

                break;
            }
            case 3:
            {
                FindApplyUI findapplyui;
                findapplyui.findMyApply(out_fp, loginedMember, findapply);
                break;
            }
            case 4:
            {
                CancelApplyUI cancelapplyui;
                cancelapplyui.selectApplyToCancel(out_fp, loginedMember, cancelapply);
                break;
            }
            }
        }
        case 5://���� ���� ���
        {
            switch (menu_level_2)
            {
            case 1:
            {

                break;
            }
            }
        }

        case 6:
        {
            switch (menu_level_2)
            {
            case 1:   // "6.1. ���ᡰ �޴� �κ�
            {

                program_exit(out_fp);
                is_program_exit = 1;
                break;
            }
            }

        }

        }

    }

}


void program_exit(FILE* out_fp)
{
    fprintf(out_fp, "6. 1. ����\n");
}