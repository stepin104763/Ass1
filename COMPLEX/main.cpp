#include <iostream>
#include "Complex.h"



using namespace std;

int main()
{

    Complex c (10,20);
    Complex c1(15,16);
    Complex c2=c+c1;
    Complex c3=c-c1;
    Complex c4=c*c1;
    c2.display();
    c3.display();
    c4.display();


}
