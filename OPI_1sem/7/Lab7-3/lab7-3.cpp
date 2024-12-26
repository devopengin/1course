#include <string>
#include <iostream>
#include <codecvt>

std::string EncodeUTF8(std::wstring s) {
    std::wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t> converter;
    return converter.to_bytes(s);
}

int main() {
    std::wstring s = L"Привет, мир!";
    std::string encoded = EncodeUTF8(s);
    std::cout << encoded << std::endl;
    return 0;
}
