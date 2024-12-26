#include <iostream>

//KravchenkoSergey2006
//4B 72 61 76 63 68 65 6E 6B 6F  53 65 72 67 65 79  32 30 30 36 00 windows-1251
//4B 72 61 76 63 68 65 6E 6B 6F  53 65 72 67 65 79  32 30 30 36 00 utf-8
//004b 0072 0061 0076 0063 0068 0065 006e 006b 006f 0053 0065 0072 0067 0065 0079 0032 0030 0030 0036 utf-16


//КравченкоСергейСергеевич2006
//ca fe e0 e2 f7 e5 ed ea ee d1 e5 f0 e3 e5 e9 d1 e5 f0 e3 e5 e5 e2 e8 f7 32 30 30 36 00 windows-1251
//d09a d180 d0b0 d0b2 d187 d0b5 d0bd d0ba d0be d0a1 d0b5 d180 d0b3 d0b5 d0b9 d0a1 d0b5 d180 d0b3 d0b5 d0b5 d0b2 d0b8 d187 32 30 30 36 utf-8
//041a 0440 0430 0432 0447 0435 043d 043a 043e 0421 0435 0440 0433 0435 0439 0421 0435 0440 0433 0435 0435 0432 0438 0447 0032 0030 0030 0036 utf-16


//Кравченко2006Sergey
//ca f0 e0 e2 f7 e5 ed ea ee 32 30 30 36 53 65 72 67 65 79 00 windows-1251
//d09a d180 d0b0 d0b2 d187 d0b5 d0bd d0ba d0be 32 30 30 36 53 65 72 67 65 79 utf-8
//041A 0440 0430 0432 0447 0435 043D 043A 043E 0032 0030 0030 0036 0053 0065 0072 0067 0065 0079 utf-16


int main()
{
	int number = 0x12345678;
	char a[] = "KravchenkoSergey2006";
	char hello[] = "Hello, ";
	char lfie[] = "KravchenkoSergey2006";
	char rfie[] = "КравченкоСергейСергеевич2006";
	char lr[] = "Кравченко2006Sergey";

	wchar_t Lfie[] = L"KravchenkoSergey2006";
	wchar_t Rfie[] = L"КравченкоСергейСергеевич2006";
	wchar_t LR[] = L"Кравченко2006Сергей";

	std::cout << hello << lfie << std::endl;
	return 0;
}