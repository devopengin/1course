#include <iostream>
#include <Windows.h>
using namespace std;

void case3() {
    int amount = 0;
    cout << "Введите количество символов: " << endl;
    cin >> amount;
    unsigned char code;
    for (int i = 1; i <= amount; i++) {
        cout << "Введите цифру ";
        cin >> code;
        if (code >= 0x30 && code <= 0x39) {
            printf("Это цифра %c, код Windows-1251 = %X\n", code, code);
        }
        else {
            cout << "Ошибка" << endl;
        }
    }
}
