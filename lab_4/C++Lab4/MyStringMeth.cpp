#include "MyStringMeth.h"
#include <Windows.h>
using namespace std;

void myStr(void)
{
	cout << "Решите загадку:\nКакое слово начинается с трех букв <<Г>> и заканчивается тремя буквами <<Я>>?\n(слово писать с большой буквы)" << endl;
	char answer[14];
	char check[] = "Тригонометрия";

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	do 
	{
		cin >> answer;
	} while (strcmp(check, answer) != 0);

	char str[50] = "Правильный ответ - ";
	char sign[4] = "!";

	strcat(str, answer);

	strcpy(sign, "!!!");
	
	strcat(str, sign);

	cout << str << " \nДлина строки сверху: " << strlen(str) << " букв." << endl;
}
