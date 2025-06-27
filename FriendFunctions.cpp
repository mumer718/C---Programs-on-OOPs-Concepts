#include<iostream>
using namespace std;

class Shape {
    public:
     virtual void type() = 0; 
};

class circle: public Shape {
    public:
    void type() override {
cout<<"Its type is circle!"<<endl;
    }
};
int main() {
circle c1;
c1.type();
}