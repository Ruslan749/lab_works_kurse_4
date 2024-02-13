
#include <iostream>

void main(void) {
	setlocale(LC_ALL, "RU"); // указания языка кодировки

	int a = 2, b = 5;
	void obmen1(int, int);
	void obmen1(int*, int*);
	void obmen1(int&, int&);

	std::cout << "без обмена: a = " <<a<< " b = " <<b<<"\n";
	// вызов obmen1;
	std::cout << " oбмен 1: a = " << a << " b = " << b << "\n";
	// вызов obmen2;
	std::cout << " обмен 2: a = " << a << " b = " << b << "\n";
	// вызов obmen3;
	std::cout << " обмен 3: a = " << a << " b = " << b << "\n";
}
