#pragma once
void handleWeather(char weather) {
    setlocale(LC_ALL, "RUS");
    switch (weather) {
    case '1':
        cout << "Студент пошел гулять." << endl;
        break;
    case '2':
        cout << "Студент писал реферат, пообедал и продолжил писать реферат." << endl;
        break;
    default:
        cout << "Некорректная информация о погоде." << endl;
        break;
    }
}