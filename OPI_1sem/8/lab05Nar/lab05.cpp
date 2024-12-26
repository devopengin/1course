#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    unsigned char code;
    char c;
    int n = 0;
    setlocale(LC_CTYPE, "Russian");
    while (true) {
        cout << "�������� ������� ������������� ���������" << endl;
        cout << "1 � ����������� ������� �������� ����� � ASCII ����� � ��������� � �������� ���������, ���� ������ ������ ���������� ��������, ����� ����� ��������� �� ������ " << endl;
        cout << "2 � ����������� ������� �������� ����� � Windows-1251 ����� � ��������� � �������� ���������, ���� ������ ������ �������� ��������, ����� ����� ��������� �� ������ " << endl;
        cout << "3 � ����� � ������� ���� �������, ���������������� ��������� �����, ����� ����� ��������� �� ������ " << endl;
        cout << "4 � ����� �� ���������." << endl;
        cin >> n;
        switch (n)
        {
        case 1:
        {
            cout << "������� ������ ";
            cin >> code;
            if (code >= 0x61 && code <= 0x7A)
            {
                printf("��� ��������� ����� %c, ��� Windows-1251 = %X\n", code, code);
                code = code - 0x20;
                printf("��������� ����� %c, ", code);
                cout << endl;
            }
            else if (code >= 0x41 && code <= 0x5A)
            {
                printf("��� ��������� ����� %c, ��� Windows-1251 = %X\n", code, code);
                code = code + 0x20;
                printf("��������� ����� %c, ", code);
                cout << endl;
            }
            else
            {
                cout << "������" << endl;
            }
        }break;
        case 2:
        {

            cout << "������� ������ ";
            cin >> code;
            if (code >= 0xE0 && code <= 0xFF)
            {
                printf("��� ������� ����� %c, ��� Windows-1251 = %X\n", code, code);
                code = code - 0x20;
                printf("��������� ����� %c, ", code);
                cout << endl;
            }
            else if (code >= 0xC0 && code <= 0xDF)
            {
                printf("��� ������� ����� %c, ��� Windows-1251 = %X\n", code, code);
                code = code + 0x20;
                printf("�������� ����� %c, ", code);
                cout << endl;
            }
            else
            {
                cout << "������" << endl;
            }

        }break;
        case 3:
        {
            cout << "������� ����� ";
            cin >> code;
            if (code >= 0x30 && code <= 0x39)
            {
                printf("��� ����� %c, ��� Windows-1251 = %X\n", code, code);
            }
            else {
                cout << "������" << endl;
            }
        }break;
        case 4:
        {
            return 0;
        }
        default:
            cout << "������! �������� ������� �������������" << endl;
            return 0;
        }

    }
}

