#include "Complex.h"

Complex::Complex()
{

}

Complex::Complex(float real, float image)
{
    m_real = real;
    m_image = image;
}

//����+�����
Complex operator+(const Complex &c1, const Complex &c2)
{
    Complex temp;
    temp.m_real = c1.m_real + c2.m_real;
    temp.m_image = c1.m_image + c2.m_image;

    return temp;
}

//����-�����
Complex operator-(const Complex &c1, const Complex &c2)
{
    Complex temp;
    temp.m_real = c1.m_real - c2.m_real;
    temp.m_image = c1.m_image - c2.m_image;

    return temp;
}

//����*�����
Complex operator*(const Complex &c1, const Complex &c2)
{
    Complex temp;
    temp.m_real = (c1.m_real * c2.m_real) - (c1.m_image * c2.m_image);
    temp.m_image =(c1.m_image * c2.m_real) + (c1.m_real * c2.m_image);

    return temp;
}

//����/�����
Complex operator/(const Complex &c1, const Complex &c2)
{
    Complex temp;
    temp.m_real = (c1.m_real * c2.m_real + c1.m_image * c2.m_image) /
                  (c2.m_real * c2.m_real + c2.m_image * c2.m_image);

    temp.m_image =(c1.m_image * c2.m_real - c1.m_real * c2.m_image) /
                  (c2.m_real * c2.m_real + c2.m_image * c2.m_image);

    return temp;
}

//����<<�����
ostream & operator<<(ostream &os, const Complex &c)
{
    os << c.m_real << "+" << c.m_image << "i" << endl;
    return os;
}

Complex::~Complex()
{

}
