#include <windows.h>
#include <iostream>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    using namespace std;
    unsigned char code;
    int m = 0;
        cout << "������� ������ ";
        cin >> code;
        if (code >= 0x30 && code <= 0x39)
        {
            printf("��� ����� %c, ��� Windows-1251 = %X\n", code, code);
        }
    system("pause");
    return 0;
}