
#include <iostream>

void main(void) {
	int a = 2, b = 5;
	void obmen1(int, int);
	void obmen1(int*, int*);
	void obmen1(int&, int&);

	std::cout << "not obmen: a = " <<a<< " b = " <<b;
	// вызов obmen1;
	std::cout << " obmen_1: a = " << a << " b = " << b;
	// вызов obmen2;
	std::cout << " obmen_2: a = " << a << " b = " << b;
	// вызов obmen3;
	std::cout << " obmen_3: a = " << a << " b = " << b;
}
