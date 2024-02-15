#include <iostream>
#define PR(x, type) std::cout << #type << " x=" << x << ", *x=" << *x << ", &x=" << &x << std::endl

int main() {
    // Integer example
    int intArray[] = { 100, 200, 300 };
    int* intPtr1, * intPtr2;
    intPtr1 = intArray;
    intPtr2 = &intArray[2];

    PR(intPtr1, int);
    intPtr1++;
    PR(intPtr1, int);
    PR(intPtr2, int);
    std::cout << "intPtr2 - intPtr1 = " << intPtr2 - intPtr1 << std::endl;

    // Char example
    char charArray[] = { 'a', 'b', 'c' };
    char* charPtr1, * charPtr2;
    charPtr1 = charArray;
    charPtr2 = &charArray[2];

    PR(charPtr1, char);
    charPtr1++;
    PR(charPtr1, char);
    PR(charPtr2, char);
    std::cout << "charPtr2 - charPtr1 = " << charPtr2 - charPtr1 << std::endl;

    // Float example
    float floatArray[] = { 1.1, 2.2, 3.3 };
    float* floatPtr1, * floatPtr2;
    floatPtr1 = floatArray;
    floatPtr2 = &floatArray[2];

    PR(floatPtr1, float);
    floatPtr1++;
    PR(floatPtr1, float);
    PR(floatPtr2, float);
    std::cout << "floatPtr2 - floatPtr1 = " << floatPtr2 - floatPtr1 << std::endl;

    // Double example
    double doubleArray[] = { 1.123, 2.234, 3.345 };
    double* doublePtr1, * doublePtr2;
    doublePtr1 = doubleArray;
    doublePtr2 = &doubleArray[2];

    PR(doublePtr1, double);
    doublePtr1++;
    PR(doublePtr1, double);
    PR(doublePtr2, double);
    std::cout << "doublePtr2 - doublePtr1 = " << doublePtr2 - doublePtr1 << std::endl;

    return 0;
}