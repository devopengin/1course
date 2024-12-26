#include <iostream>
using namespace std;

int sum_of_even()
{
    setlocale(LC_ALL, "RUS");
    int length = 0;
    int sum = 0;
    cout << "¬ведите длину последовательности: " << endl;
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}
