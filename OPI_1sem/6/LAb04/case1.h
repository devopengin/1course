#pragma once
#include <iostream>
using namespace std;
void getWeatherInfo(char& weather) {
    setlocale(LC_ALL, "RUS");
    cout << "¬ведите информацию о погоде (хороша€ - '1', плоха€ - '2'): ";
    cin >> weather;
}