
#include <windows.h>
#include <iostream>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    using namespace std;
    unsigned char code;
    int m = 0;
    for (; m < 5; m++) {
        cout << "Введите символ ";
        cin >> code;
        if (code >= 0xE0 && code <= 0xFF)
        {
            printf("Это русская буква %c, код Windows-1251 = %X\n", code, code);
            code = code - 0x20;
            printf("Строчная буква %c, ", code);
            cout << endl;
        }
        else if (code >= 0xC0 && code <= 0xDF)
        {
            printf("Это русская буква %c, код Windows-1251 = %X\n", code, code);
            code = code + 0x20;
            printf("Прописная буква %c, ", code);
            cout << endl;
        }
        else
        {
            printf("Это не цифра и не буква «%c», код = %X", code, code);
            cout << endl;
        }
    }

    system("pause");
    return 0;
}
