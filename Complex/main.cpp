#include "Complex.h"

int main()
{
    Complex a(1, 2);
    Complex b(2.0, 3);
    Complex c = a + b;
    c.Print();

    c = a - b;
    c.Print();

    c = a * b;
    c.Print();

    c = a / b;
    c.Print();

    return 0;
}
