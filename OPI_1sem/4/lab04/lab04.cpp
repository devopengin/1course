#include <windows.h>
#include <iostream>
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    using namespace std;
    unsigned char code;
    cout << "������� ������ ";
    cin >> code;
    if (code >= '0' && code <= '9')
    {
        printf("��� ����� %c, ��� ASCII = %X", code, code);
        cout << endl;
    }
    else if (code >= 'A' && code <= 'z')
    {
        printf("��� ��������� ����� %c, ��� ASCII = %X", code, code);
        cout << endl;
    }
    else if (code >= 0xC0 && code <= 0xFF)
    {
        printf("��� ������� ����� %c, ��� Windows-1251 = %X", code, code);
        cout << endl;
    }
    else
    {
        printf("��� �� ����� � �� ����� �%c�, ��� = %X", code, code);
        cout << endl;
    }
    system("pause");
    return 0;
}
