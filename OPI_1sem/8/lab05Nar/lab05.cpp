#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    unsigned char code;
    char c;
    int n = 0;
    setlocale(LC_CTYPE, "Russian");
    while (true) {
        cout << "Выберите вариант использования программы" << endl;
        cout << "1 – определение разницы значений кодов в ASCII буквы в прописном и строчном написании, если введен символ латинского алфавита, иначе вывод сообщения об ошибке " << endl;
        cout << "2 – определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании, если введен символ русского алфавита, иначе вывод сообщения об ошибке " << endl;
        cout << "3 – вывод в консоль кода символа, соответствующего введенной цифре, иначе вывод сообщения об ошибке " << endl;
        cout << "4 – выход из программы." << endl;
        cin >> n;
        switch (n)
        {
        case 1:
        {
            cout << "Введите символ ";
            cin >> code;
            if (code >= 0x61 && code <= 0x7A)
            {
                printf("Это латинская буква %c, код Windows-1251 = %X\n", code, code);
                code = code - 0x20;
                printf("Прописная буква %c, ", code);
                cout << endl;
            }
            else if (code >= 0x41 && code <= 0x5A)
            {
                printf("Это латинская буква %c, код Windows-1251 = %X\n", code, code);
                code = code + 0x20;
                printf("Прописная буква %c, ", code);
                cout << endl;
            }
            else
            {
                cout << "Ошибка" << endl;
            }
        }break;
        case 2:
        {

            cout << "Введите символ ";
            cin >> code;
            if (code >= 0xE0 && code <= 0xFF)
            {
                printf("Это русская буква %c, код Windows-1251 = %X\n", code, code);
                code = code - 0x20;
                printf("Прописная буква %c, ", code);
                cout << endl;
            }
            else if (code >= 0xC0 && code <= 0xDF)
            {
                printf("Это русская буква %c, код Windows-1251 = %X\n", code, code);
                code = code + 0x20;
                printf("Строчная буква %c, ", code);
                cout << endl;
            }
            else
            {
                cout << "Ошибка" << endl;
            }

        }break;
        case 3:
        {
            cout << "Введите цифру ";
            cin >> code;
            if (code >= 0x30 && code <= 0x39)
            {
                printf("Это цифра %c, код Windows-1251 = %X\n", code, code);
            }
            else {
                cout << "Ошибка" << endl;
            }
        }break;
        case 4:
        {
            return 0;
        }
        default:
            cout << "Ошибка! Неверный вариант использования" << endl;
            return 0;
        }

    }
}

