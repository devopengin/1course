#include <iostream> //����������� ���������//
#include <cmath> //����������� ���������//

int main()
{
	setlocale(LC_ALL, "RUS"); //������������� ������//
	using namespace std; //������������� ������������� ����//
	float a=0, b=3, n=200,h, s=0, x=0, func=0, func1=0; //����������//
	x = a;
	h = (b - a) / n; //��������� ������ ��������//
	while (x <= (b - h)) //���� ��� ���������� �� ������ ��������//
	{
		func = pow(x, 3) - 1; //�������� ������� f(x)//
		func1 = pow((x + h), 3) - 1; //�������� ������� f(x+h)//
		s = s + h * (func + func1) / 2; //������� ��������//
		x = x + h; 
	}
	cout << "������� �� ������ �������� ����� = " << s << endl; //�����//
	return 0;
}