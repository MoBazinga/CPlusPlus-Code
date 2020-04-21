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

    friend ostream& operator <<(ostream& os, const Compl#ifndef COMPLEX_H
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

    //��Ԫ����+�����
    friend Complex operator +(const Complex &c1, const Complex &c2)
    {
        Complex temp;
        temp.m_real = c1.m_real + c2.m_real;
        temp.m_image = c1.m_image + c2.m_image;

        return temp;
    }

    //��Ԫ����-�����
    friend Complex operator -(const Complex &c1, const Complex &c2)
    {
        Complex temp;
        temp.m_real = c1.m_real - c2.m_real;
        temp.m_image = c1.m_image - c2.m_image;

        return temp;
    }

    //��Ԫ����*�����
    friend Complex operator *(const Complex &c1, const Complex &c2)
    {
        Complex temp;
        temp.m_real = (c1.m_real * c2.m_real) - (c1.m_image * c2.m_image);
        temp.m_image =(c1.m_image * c2.m_real) + (c1.m_real * c2.m_image);

        return temp;
    }

    //��Ԫ����/�����
    friend Complex operator /(const Complex &c1, const Complex &c2)
    {
        Complex temp;
        temp.m_real = (c1.m_real * c2.m_real + c1.m_image * c2.m_image) /
                      (c2.m_real * c2.m_real + c2.m_image * c2.m_image);

        temp.m_image =(c1.m_image * c2.m_real - c1.m_real * c2.m_image) /
                      (c2.m_real * c2.m_real + c2.m_image * c2.m_image);

        return temp;
    }

    //��Ԫ����<<�����
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

template <typename T1, typename T2>
Complex<T1, T2>::~Complex()
{

}

#endif // COMPLEX_H
ex& c)
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

//����+�����
template <typename T1, typename T2>
Complex<T1, T2> Complex<T1, T2>::operator +(const Complex &c) const
{
    Complex temp;
    temp.m_real = this->m_real + c.m_real;
    temp.m_image = this->m_image + c.m_image;

    return temp;
}

//����-�����
template <typename T1, typename T2>
Complex<T1, T2> Complex<T1, T2>::operator -(const Complex &c) const
{
    Complex temp;
    temp.m_real = this->m_real - c.m_real;
    temp.m_image = this->m_image - c.m_image;

    return temp;
}

//����*�����
template <typename T1, typename T2>
Complex<T1, T2> Complex<T1, T2>::operator *(const Complex &c) const
{
    Complex temp;
    temp.m_real = (this->m_real * c.m_real) - (this->m_image * c.m_image);
    temp.m_image =(this->m_image * c.m_real) + (this->m_real * c.m_image);

    return temp;
}

//����/�����
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
