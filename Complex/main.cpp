#include "Complex.h"

int main()
{
    Complex a(1, 2);
    Complex b(2, 3);
    Complex c = a + b;
    cout << c;

    c = a - b;
    cout << c;

    c = a * b;
    cout << c;

    c = a / b;
    cout << c;

    return 0;
}
