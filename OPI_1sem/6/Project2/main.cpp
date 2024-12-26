#include <iostream>
#include <Windows.h>
#include "case1.h"
#include "case2.h"
#include "case3.h"
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int choise = 0;
    setlocale(LC_CTYPE, "Russian");

    while (true) {
        cout << "¬ыберите вариант использовани€ программы" << endl;
        cout << "1 Ц определение разницы значений кодов в ASCII буквы в прописном и строчном написании, если введен символ латинского алфавита, иначе вывод сообщени€ об ошибке " << endl;
        cout << "2 Ц определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании, если введен символ русского алфавита, иначе вывод сообщени€ об ошибке " << endl;
        cout << "3 Ц вывод в консоль кода символа, соответствующего введенной цифре, иначе вывод сообщени€ об ошибке " << endl;
        cout << "4 Ц выход из программы." << endl;
        cin >> choise;

        switch (choise) {
        case 1:
            case1();
            break;
        case 2:
            case2();
            break;
        case 3:
            case3();
            break;
        case 4:
            return 0;
        default:
            cout << "ќшибка! Ќеверный вариант использовани€" << endl;
            return 0;
        }
    }
    return 0;
}
