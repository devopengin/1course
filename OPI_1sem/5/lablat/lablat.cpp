#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int n = 0;
    cout << "������ ����� �������?(1 - ��, 2 - ���)" << endl;
    cin >> n;
        switch (n)
        {
        case 1: cout << "������� ������ ������" << endl; break;
        case 2: cout << "������� ����� ������ �������, ��������� � ��������� ������ �������" << endl; break;
        }
        cout << "���������� ��������� ���: " << endl;
        if (n == 1) {
            cout << "���� ������ ������������, ������� ������� �� �����" << endl;
        }
        if (n == 2) {
            cout << "������� ���� ���� ��� ���� � ����� �����" << endl;
        }
        return 0;
}
