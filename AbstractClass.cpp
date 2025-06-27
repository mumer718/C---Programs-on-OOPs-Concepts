#include<iostream>
using namespace std;
class Shape {
public:
    virtual void draw() = 0;  
};

class circle : public Shape {
    public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};
int main() {
    circle c1;
    c1.draw();
}