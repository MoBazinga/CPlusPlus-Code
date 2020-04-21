#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Complex
{
public:
    Complex();
    Complex(T1 real, T2 image);

    virtual ~Complex();

    Complex operator +(const Complex &c) const;
    Complex operator -(const Complex &c) const;
    Complex operator *(const Complex &c) const;
    Complex operator /(const Complex &c) const;

    friend ostream& operator <<(ostream& os, const Complex& c)
    {
        os << c.m_real << "+" << c.m_image << "i" << endl;
        return os;
    }

private:
    T1 m_real;
    T2 m_image;
};

template <typename T1, typename T2>
Complex<T1, T2>::Complex()
{

}

template <typename T1, typename T2>
Complex<T1, T2>::Complex(T1 real, T2 image)
{
    m_real = real;
    m_image = image;
}

//重载+运算符
template <typename T1, typename T2>
Complex<T1, T2> Complex<T1, T2>::operator +(const Complex &c) const
{
    Complex temp;
    temp.m_real = this->m_real + c.m_real;
    temp.m_image = this->m_image + c.m_image;

    return temp;
}

//重载-运算符
template <typename T1, typename T2>
Complex<T1, T2> Complex<T1, T2>::operator -(const Complex &c) const
{
    Complex temp;
    temp.m_real = this->m_real - c.m_real;
    temp.m_image = this->m_image - c.m_image;

    return temp;
}

//重载*运算符
template <typename T1, typename T2>
Complex<T1, T2> Complex<T1, T2>::operator *(const Complex &c) const
{
    Complex temp;
    temp.m_real = (this->m_real * c.m_real) - (this->m_image * c.m_image);
    temp.m_image =(this->m_image * c.m_real) + (this->m_real * c.m_image);

    return temp;
}

//重载/运算符
template <typename T1, typename T2>
Complex<T1, T2> Complex<T1, T2>::operator /(const Complex &c) const
{
    Complex temp;
    temp.m_real = (this->m_real * c.m_real + this->m_image * c.m_image) /
                  (c.m_real * c.m_real + c.m_image * c.m_image);

    temp.m_image =(this->m_image * c.m_real - this->m_real * c.m_image) /
                  (c.m_real * c.m_real + c.m_image * c.m_image);

    return temp;
}

template <typename T1, typename T2>
Complex<T1, T2>::~Complex()
{

}

#endif // COMPLEX_H
