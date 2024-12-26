#include <iostream> //����������� ���������//
#include <cmath>
using namespace std;//���������� ������������ ����//

int main() {
    setlocale(LC_ALL, "RUS"); //������������� ������//
    int k, n, q;
    cout << "������� ������ ������� X: "; //���� ����������� ������� X//
    cin >> k;
    cout << "������� ������ ������� Y: "; //���� ����������� ������� Y//
    cin >> n;


    double x[1000]; //������ ������������ ����������� ��������//
    double y[1000];
   

    for (int i = 0; i < k; i++) { //������ ������ ������//
        cout << "������� " << i + 1 << " ������� ������� X: ";
        cin >> *(x + i);
    }
    for (int i = 0; i < n; i++) {//������ ������ ������//
        cout << "������� " << i + 1 << " ������� ������� Y: ";
        cin >> *(y + i);
    }

    cout << "������� ����� q: ";
    cin >> q;

    double sum = *x + *y; // ��������� �������� �����//
    double differ = abs(q-sum); // ��������� �������� �������//
    double* closX = nullptr; //��������� �������� ������� X//
    double* closY = nullptr; //��������� �������� ������� Y//

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            double Sum1 = *(x+i) + *(y+j); //����� �������� �����//
            double differ1 = abs(q-Sum1); //����� �������� �������//
            if (differ1 < differ) {

                sum = Sum1; //����������� ����� �������� �����
                closX = &x[i]; //��������� ����� ������� x//
                closY = &y[j];//��������� ����� ������� y//
            }
        }
    }

   cout << "����� ������ � �������� q: " << sum << endl;
   cout << "������� �� X: " << *closX << endl; //�����������: �������� ����� �������� X
   cout << "������� �� Y: " << *closY << endl; //�����������: �������� ����� �������� Y


    return 0;
}

