// Kate Chavira
// 1096539

#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"
#include <cmath>

class circle {
    public:
       circle(point cp, double radius= 1);
       circle(double xx = 0, double yy = 0, double radius = 1);

       double area();

       double getx() {return x;}
       double gety() {return y;}
       double getr() {return r;}

    private: 
        double x, y, r;

};
bool operator ==(circle c1, circle c2);
bool operator &&(circle c1, circle c2);

#endif