#include "Complex.h"

Complex::Complex()
{

}

Complex::Complex(float real, float image)
{
    m_real = real;
    m_image = image;
}

//重载+运算符
Complex operator+(const Complex &c1, const Complex &c2)
{
    Complex temp;
    temp.m_real = c1.m_real + c2.m_real;
    temp.m_image = c1.m_image + c2.m_image;

    return temp;
}

//重载-运算符
Complex operator-(const Complex &c1, const Complex &c2)
{
    Complex temp;
    temp.m_real = c1.m_real - c2.m_real;
    temp.m_image = c1.m_image - c2.m_image;

    return temp;
}

//重载*运算符
Complex operator*(const Complex &c1, const Complex &c2)
{
    Complex temp;
    temp.m_real = (c1.m_real * c2.m_real) - (c1.m_image * c2.m_image);
    temp.m_image =(c1.m_image * c2.m_real) + (c1.m_real * c2.m_image);

    return temp;
}

//重载/运算符
Complex operator/(const Complex &c1, const Complex &c2)
{
    Complex temp;
    temp.m_real = (c1.m_real * c2.m_real + c1.m_image * c2.m_image) /
                  (c2.m_real * c2.m_real + c2.m_image * c2.m_image);

    temp.m_image =(c1.m_image * c2.m_real - c1.m_real * c2.m_image) /
                  (c2.m_real * c2.m_real + c2.m_image * c2.m_image);

    return temp;
}

//重载<<运算符
ostream & operator<<(ostream &os, const Complex &c)
{
    os << c.m_real << "+" << c.m_image << "i" << endl;
    return os;
}

Complex::~Complex()
{

}
