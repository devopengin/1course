#include <iostream>
#include <Windows.h>
using namespace std;

void case3() {
    int amount = 0;
    cout << "������� ���������� ��������: " << endl;
    cin >> amount;
    unsigned char code;
    for (int i = 1; i <= amount; i++) {
        cout << "������� ����� ";
        cin >> code;
        if (code >= 0x30 && code <= 0x39) {
            printf("��� ����� %c, ��� Windows-1251 = %X\n", code, code);
        }
        else {
            cout << "������" << endl;
        }
    }
}
