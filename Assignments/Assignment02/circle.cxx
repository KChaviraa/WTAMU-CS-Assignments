// Kate Chavira
// 1096539
#include "circle.h"

circle::circle(point cp, double radius) {
    x = cp.getx();
    y = cp.gety();
    r = radius;
}

circle::circle(double xx, double yy, double radius) {
    x = xx;
    y = yy;
    r = radius;
}

double circle::area() {
    double a = M_PI;
    double b = pow(r,2);
    double c = (a*b);
    return c;
}

bool operator ==(circle c1, circle c2) {
    return (c1.getx() == c2.getx())
            &&
            (c1.gety() == c2.gety())
            && 
            (c1.getr() == c2.getr());
}

bool operator &&(circle c1, circle c2) {

    double xdiff  = c1.getx() - c2.getx();
    double ydiff  = c1.gety() - c2.gety();
    double rdiff = c1.getr() - c2.getr();
    double rsum = c1.getr() + c2.getr();

    double a = pow(rdiff, 2);
    double b = pow(xdiff,2) + pow(ydiff,2);
    double c = pow(rsum, 2);

    return (a <= b) && (b <= c);
}

