#include "area.h"
#include <iostream>

using namespace std;

//setting action of class function
area::area()
{
    float circle, r;
    cout << "Input the radius of circle: ";
    cin >> r;
    circle = CIRCLE(r);
    cout << "The area of circle is " << circle << endl;
}
