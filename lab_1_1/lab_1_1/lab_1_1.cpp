

#include <iostream>
using namespace std;

int main(void) {
	int i, k,num;
	std::cout << "Input number: ";
	std::cin >> num;
	int power(int, int);



	for (i = 1; i < 10; i++) {
		k = power(num, i);
		cout << "i = " << i << ", k = " << k << endl;
	}
}

int power(int x, int n) {
	int i,p=1;
	for (i = 1; i <= n; i++) {
		p *= x;
	}
	return p;
}
