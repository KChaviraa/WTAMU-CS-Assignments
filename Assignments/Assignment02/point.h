// Kate Chavira
// 1096539
#ifndef POINT_H
#define POINT_H

class point {
    public:
        point(double xx = 0,  double yy = 0);

        double getx() {return x;}
        double gety() {return y;}

    private:
        double x, y;
};

#endif