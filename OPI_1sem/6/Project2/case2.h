#include <iostream>
#include <Windows.h>
using namespace std;

void case2() {
    int amount = 0;
    cout << "������� ���������� ��������: " << endl;
    cin >> amount;
    unsigned char code;
    for (int i = 1; i <= amount; i++) {
        cout << "������� ������ ";
        cin >> code;
        if (code >= 0xE0 && code <= 0xFF) {
            printf("��� ������� ����� %c, ��� Windows-1251 = %X\n", code, code);
            code = code - 0x20;
            printf("��������� ����� %c, ", code);
            cout << endl;
        }
        else if (code >= 0xC0 && code <= 0xDF) {
            printf("��� ������� ����� %c, ��� Windows-1251 = %X\n", code, code);
            code = code + 0x20;
            printf("�������� ����� %c, ", code);
            cout << endl;
        }
        else {
            cout << "������" << endl;
        }
    }
}
