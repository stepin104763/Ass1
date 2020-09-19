#include <iostream>
#include"distance.h"
using namespace std;

int main()
{
   Distance d1(1,2);
   Distance d2(3);
   Distance d3=d1+d2;
   Distance d4=d1-d2;
   d3.display();
   d4.display();
}
