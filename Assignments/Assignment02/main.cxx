//  CS 2337/L
//  Assignment 2
//  main.cxx

#include <iostream>
#include "point.h"
#include "circle.h"

using namespace std;

int main()
{
    point p1(1.5,1.5);
    point p2;
    point p3(-2,-4);
    point p4(-2.3,-3.7);
    point p5(3,4);
    point p6(-5);
    
    circle c1(p1,2);
    circle c2;
    circle c3(p2);
    circle c4(-2,-1);
    circle c5(p3,2);
    circle c6(p4,1.2);
    circle c7(p5,1.6);
    circle c8(3,4.8,.801);
    circle c9(p6);
    circle c10(-4);

    cout << "c1 area = " << c1.area() << endl;
    cout << "c2 area = " << c2.area() << endl;
    cout << "c3 area = " << c3.area() << endl;
    cout << "c4 area = " << c4.area() << endl;
    cout << "c5 area = " << c5.area() << endl;
    cout << "c6 area = " << c6.area() << endl;
    cout << "c7 area = " << c7.area() << endl;
    cout << "c8 area = " << c8.area() << endl;
    cout << "c9 area = " << c9.area() << endl;
    cout << "c10 area = " << c10.area() << endl;

    cout << "c1 == c2 = " << (c1 == c2) << endl;
    cout << "c2 == c3 = " << (c2 == c3) << endl;
    cout << "c3 == c4 = " << (c3 == c4) << endl;
    cout << "c2 == c9 = " << (c2 == c9) << endl;
    cout << "c10 == c10 = " << (c10 == c10) << endl;

    cout << "c1 && c2 = " << (c1 && c2) << endl;
    cout << "c2 && c3 = " << (c2 && c3) << endl;
    cout << "c3 && c4 = " << (c3 && c4) << endl;
    cout << "c4 && c5 = " << (c4 && c5) << endl;
    cout << "c5 && c6 = " << (c5 && c6) << endl;
    cout << "c6 && c7 = " << (c6 && c7) << endl;
    cout << "c7 && c8 = " << (c7 && c8) << endl;
    cout << "c2 && c9 = " << (c2 && c9) << endl;
    cout << "c9 && c10 = " << (c9 && c10) << endl;

    cout << "(c1 && c3) && (c1 && c7) = " << ((c1 && c3) && (c1 && c7)) << endl;
    cout << "!(c1 && c2) && !(c2 && c3) = " << (!(c1 && c2) && !(c2 && c3)) << endl;
    cout << "(c1 && c3) || (c1 && c8) = " << ((c1 && c3) || (c1 && c8)) << endl;
    cout << "(c3 && c4) || (c4 && c6) = " << ((c3 && c4) || (c4 && c6)) << endl;

    return 0;
}