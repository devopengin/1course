#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int n = 0;
    cout << "Погода будет хорошая?(1 - да, 2 - нет)" << endl;
    cin >> n;
        switch (n)
        {
        case 1: cout << "Студент пойдет гулять" << endl; break;
        case 2: cout << "Студент будет писать реферат, пообедает и продолжит писать реферат" << endl; break;
        }
        cout << "Результаты выходного дня: " << endl;
        if (n == 1) {
            cout << "День прошел замечательно, студент погулял на улице" << endl;
        }
        if (n == 2) {
            cout << "Студент весь день был дома и делал уроки" << endl;
        }
        return 0;
}
