#include <iostream> //����������� ����������//
using namespace std;//������������� ������������ ������//

int main()
{
    setlocale(LC_ALL, "RUS"); //������������� ������//
    float C1, C2; //����������
    cout << "������� ����� ���� � ������ �������" << endl;
    cin >> C1;
    cout << "������� ����� ���� �� ������ �������" << endl;
    cin >> C2;

    for (int i = 0; i < 12; i++) //���� ����� ����������� 12 ���//
    {
        C1 = C1 / 2; 
        C2 += C1; //����������� �������� ������� �� ������//
        C2 = C2 / 2;
        C1 += C2; //����������� �������� ������� � ������//
    }

    cout << "� ������ ������ ������: " << C1 << endl; //�����//
    cout << "�� ������ ������ ������: " << C2 << endl;//�����//

    return 0;
}