#pragma once
void handleWeather(char weather) {
    setlocale(LC_ALL, "RUS");
    switch (weather) {
    case '1':
        cout << "������� ����� ������." << endl;
        break;
    case '2':
        cout << "������� ����� �������, �������� � ��������� ������ �������." << endl;
        break;
    default:
        cout << "������������ ���������� � ������." << endl;
        break;
    }
}