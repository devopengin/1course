#pragma once
#include <iostream>
using namespace std;
void getWeatherInfo(char& weather) {
    setlocale(LC_ALL, "RUS");
    cout << "������� ���������� � ������ (������� - '1', ������ - '2'): ";
    cin >> weather;
}