// ��� ����
#include <stdio.h>
#include <string.h>
#include "FindApply.h"
#include "GetGeneralApplyConut.h"
#include "selectApplyToCancel.h"
// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void doTask();
void join();
void program_exit();

// ���� ����
FILE* in_fp, * out_fp;
FindApply findapp;
selectApplyToCancel selec;
int main()
{
    // ���� ������� ���� �ʱ�ȭ 
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");



    doTask();



    return 0;
}






void doTask()
{
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
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
                // join() �Լ����� �ش� ��� ���� 
                join();//� stereotype? controll class�� �������� usecase�� ����� �ϳ��������°���

                break;
            }
            case 2://ȸ��Ż��
            {

                break;
            }
            }
        }

        case 2://�α���,�α׾ƿ�
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
            }}

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
                findapp.run();
                break;
            }
            case 4:
            {
                selec.run();
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

                program_exit();
                is_program_exit = 1;
                break;
            }
            }

        }

        }

        return;
    }
}


void join()
{
    /*            !!!!!!!       �߿�        !!!!!!!!!
     * �ܼ��� ������ ���� ������ϴ� ����� ���̱� ���� �ڵ��̹Ƿ� �� �Լ����� �״�� ����ϸ� �ȵ�.
     * control �� boundary class�� �̿��ؼ� �ش� ����� �����ǵ��� �ؾ� ��.
     boundary class�� ���� �а��°Ÿ� ��*/

    char user_type[MAX_STRING], name[MAX_STRING], SSN[MAX_STRING],
        address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];

    // �Է� ���� : �̸�, �ֹι�ȣ, ID, Password�� ���Ϸκ��� ����
    fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);


    // �ش� ��� ����  


        // ��� ����
    fprintf(out_fp, "1.1. ȸ������\n");
    fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
}


void program_exit()
{

}
