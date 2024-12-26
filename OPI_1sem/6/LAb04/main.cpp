#include <iostream>
using namespace std;
#include "case1.h"
#include "case2.h"


int main() {
    char weather;
    getWeatherInfo(weather);
    handleWeather(weather);
    return 0;
}
