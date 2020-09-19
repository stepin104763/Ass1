#include<iostream>
#include "Complex.h"

Complex::Complex():m_real(0),m_imag(0) {}
Complex::Complex(int a,int b):m_real(a),m_imag(b) {}
Complex::Complex(int d):m_real(d) {}
Complex Complex::operator+(const Complex &ref) {

    int tmins = m_imag + ref.m_imag;
    int thrs = m_real+ref.m_real;
    return Complex(thrs, tmins);
}
Complex Complex::operator-(const Complex &ref) {
    int tmins = m_imag - ref.m_imag;
    int thrs = m_real - ref.m_real;
    return Complex(thrs, tmins);
}
Complex Complex::operator*(const Complex &ref) {
    int tmins = m_imag * ref.m_imag;
    int thrs = m_real * ref.m_real;
    return Complex(thrs, tmins);
}
Complex& Complex:: operator++() {
    ++m_imag; // TODO: mm > 60
    return *this;}
Complex Complex:: operator++(int dummy) {
    Complex orig(*this);
    ++m_real; // TODO: mm > 60
    return orig;
  }
bool Complex::operator==(const Complex &ref) {
    return m_real == ref.m_real && m_imag == ref.m_imag;
}
void Complex::display() {
    std::cout<<m_real<<":"<<m_imag<<"\n";
}
