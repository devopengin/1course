#include <iostream>
#include <Windows.h>
using namespace std;
void case1() {
    int amount = 0;
    unsigned char code;
    cout << "������� ���������� ��������: " << endl;
    cin >> amount;
        for (int i = 1; i < (amount + 1);) {
            cout << "������� ������ ";
            cin >> code;
            if (code >= 0x61 && code <= 0x7A) {
                printf("��� ��������� ����� %c, ��� Windows-1251 = %X\n", code, code);
                code = code - 0x20;
                printf("��������� ����� %c, ", code);
                cout << endl;
            }
            else if (code >= 0x41 && code <= 0x5A) {
                printf("��� ��������� ����� %c, ��� Windows-1251 = %X\n", code, code);
                code = code + 0x20;
                printf("�������� ����� %c, ", code);
                cout << endl;
            }
            else {
                cout << "������" << endl;
            }
            i += 1;
        }
    } 

