#include<iostream>
#include "Distance.h"
Distance::Distance():m_feets(0),m_inches(0) {}
Distance::Distance(int a,int b):m_feets(a),m_inches(b) {}
Distance::Distance(int d):m_feets(d) {}
Distance Distance::operator+(const Distance &ref) {

    int tmins = m_inches + ref.m_inches;
    int thrs = m_feets+ref.m_feets;
    return Distance(thrs, tmins);
}
Distance Distance::operator-(const Distance &ref) {
    int tmins = m_inches - ref.m_inches;
    int thrs = m_feets - ref.m_feets;
    return Distance(thrs, tmins);
}
Distance Distance::operator*(const Distance &ref) {
    int tmins = m_inches * ref.m_inches;
    int thrs = m_feets * ref.m_feets;
    return Distance(thrs, tmins);
}
Distance& Distance:: operator++() {
    ++m_inches; // TODO: mm > 60
    return *this;}
Distance Distance:: operator++(int dummy) {
    Distance orig(*this);
    ++m_feets; // TODO: mm > 60
    return orig;
  }
bool Distance::operator==(const Distance &ref) {
    return m_feets == ref.m_feets && m_inches == ref.m_inches;
}
 bool Distance::operator< (const Distance &ref){}
 bool Distance::operator> (const Distance &ref){}

void Distance::display() {
    std::cout<<m_feets<<":"<<m_inches<<"\n";
}
