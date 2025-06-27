#include <iostream>
using namespace std;

class Circle
{
private:
    float perimeter;
    float area;
    float radius;
    float pi = 3.14;

public:
    void setradius(float r)
    {
        radius = r;
    }
    float getradius()
    {
        return radius;
    }
    void setPerimeter(float p)
    {
        perimeter = p;
    }
    float getPerimeter()
    {
        return perimeter = 2 * 3.14 * radius;
    }
    void setArea(float a)
    {
        area = a;
    }
    float getArea()
    {
        return area = 3.14 * radius *radius;
    }
    void display() {
        cout<<"the value of radius is: "<<radius<<endl;
        cout<<"the value of area is: "<<area<<endl;
        cout<<"the value of perimeter is: "<<perimeter<<endl;
    }
};
int main()
{
    Circle c1;
    c1.setradius(3);
    c1.getradius();
    c1.setArea(3);
    c1.getArea();
    c1.setPerimeter(3);
    c1.getPerimeter();
    c1.display();
}
