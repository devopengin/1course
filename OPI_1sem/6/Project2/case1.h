#include <iostream>
#include <Windows.h>
using namespace std;
void case1() {
    int amount = 0;
    unsigned char code;
    cout << "Введите количество символов: " << endl;
    cin >> amount;
        for (int i = 1; i < (amount + 1);) {
            cout << "Введите символ ";
            cin >> code;
            if (code >= 0x61 && code <= 0x7A) {
                printf("Это латинская буква %c, код Windows-1251 = %X\n", code, code);
                code = code - 0x20;
                printf("Прописная буква %c, ", code);
                cout << endl;
            }
            else if (code >= 0x41 && code <= 0x5A) {
                printf("Это латинская буква %c, код Windows-1251 = %X\n", code, code);
                code = code + 0x20;
                printf("Строчная буква %c, ", code);
                cout << endl;
            }
            else {
                cout << "Ошибка" << endl;
            }
            i += 1;
        }
    } 

