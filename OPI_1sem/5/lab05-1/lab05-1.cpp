#include <windows.h>
#include <iostream>
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    using namespace std;
    unsigned char code;
    int number = 10;
        cout << "Введите символ ";
        cin >> code;
            printf("Это латинская буква %c, код Windows-1251 = %X\n", code, code);
            code = code - 0x20;
            printf("Строчная буква %c, ", code);
            cout << endl;
    system("pause");
    return 0;
}
