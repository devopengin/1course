#include <iostream>
#include <Windows.h>
#include "case1.h"
#include "case2.h"
#include "case3.h"
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int choise = 0;
    setlocale(LC_CTYPE, "Russian");

    while (true) {
        cout << "�������� ������� ������������� ���������" << endl;
        cout << "1 � ����������� ������� �������� ����� � ASCII ����� � ��������� � �������� ���������, ���� ������ ������ ���������� ��������, ����� ����� ��������� �� ������ " << endl;
        cout << "2 � ����������� ������� �������� ����� � Windows-1251 ����� � ��������� � �������� ���������, ���� ������ ������ �������� ��������, ����� ����� ��������� �� ������ " << endl;
        cout << "3 � ����� � ������� ���� �������, ���������������� ��������� �����, ����� ����� ��������� �� ������ " << endl;
        cout << "4 � ����� �� ���������." << endl;
        cin >> choise;

        switch (choise) {
        case 1:
            case1();
            break;
        case 2:
            case2();
            break;
        case 3:
            case3();
            break;
        case 4:
            return 0;
        default:
            cout << "������! �������� ������� �������������" << endl;
            return 0;
        }
    }
    return 0;
}
