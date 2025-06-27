#include <iostream>
using namespace std;

class Circle
{
private:
    int perimeter;
    int area;
    int radius;
    int pi = 3.14;

public:

    void setradius(int r) {
        radius = r;
    }
    int getradius() {
        return radius;
    }
    void setPerimeter(int p) {
        perimeter = p;
    }
    int getPerimeter() {
        return 2 * pi * radius;
    }
    void setArea(int a) {
        area = a;
    }
    int getArea() {
        return area = pi * radius ^ 2;
    }
};
int main() {
    Circle c1;
    c1.setradius(3);
    c1.getradius();
    c1.setArea(3);
    c1.getArea();
    c1.setPerimeter(3);
    c1.getPerimeter();
}
