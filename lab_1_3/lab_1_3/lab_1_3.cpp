
#include <iostream>

void obmen1(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void obmen2(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void obmen3(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    setlocale(LC_ALL, "RU");

    int a = 2, b = 5;

    std::cout << "без обмена: a = " << a << " b = " << b << "\n";

    obmen1(a, b);

    std::cout << " обмен 1: a = " << a << " b = " << b << "\n";

    obmen2(&a, &b);

    std::cout << " обмен 2: a = " << a << " b = " << b << "\n";

    obmen3(a, b);

    std::cout << " обмен 3: a = " << a << " b = " << b << "\n";

    return 0;
}