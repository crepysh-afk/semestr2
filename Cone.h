#ifndef CONE_H
#define CONE_H

class Cone {
private:
    double x, y, z;
    double radius;
    double height;

    void validate() const;   

public:
    Cone(double cx, double cy, double cz, double r, double h);

    double slantHeight() const;
    double surfaceArea() const;

    void print() const;
};

#endif
