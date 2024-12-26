#include <iostream>
#include <Windows.h>
using namespace std;

void case2() {
    int amount = 0;
    cout << "Введите количество символов: " << endl;
    cin >> amount;
    unsigned char code;
    for (int i = 1; i <= amount; i++) {
        cout << "Введите символ ";
        cin >> code;
        if (code >= 0xE0 && code <= 0xFF) {
            printf("Это русская буква %c, код Windows-1251 = %X\n", code, code);
            code = code - 0x20;
            printf("Прописная буква %c, ", code);
            cout << endl;
        }
        else if (code >= 0xC0 && code <= 0xDF) {
            printf("Это русская буква %c, код Windows-1251 = %X\n", code, code);
            code = code + 0x20;
            printf("Строчная буква %c, ", code);
            cout << endl;
        }
        else {
            cout << "Ошибка" << endl;
        }
    }
}
