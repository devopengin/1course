
#include <windows.h>
#include <iostream>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    using namespace std;
    unsigned char code;
    int m = 0;
    for (; m < 5; m++) {
        cout << "������� ������ ";
        cin >> code;
        if (code >= 0xE0 && code <= 0xFF)
        {
            printf("��� ������� ����� %c, ��� Windows-1251 = %X\n", code, code);
            code = code - 0x20;
            printf("�������� ����� %c, ", code);
            cout << endl;
        }
        else if (code >= 0xC0 && code <= 0xDF)
        {
            printf("��� ������� ����� %c, ��� Windows-1251 = %X\n", code, code);
            code = code + 0x20;
            printf("��������� ����� %c, ", code);
            cout << endl;
        }
        else
        {
            printf("��� �� ����� � �� ����� �%c�, ��� = %X", code, code);
            cout << endl;
        }
    }

    system("pause");
    return 0;
}
