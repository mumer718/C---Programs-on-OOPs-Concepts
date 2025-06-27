// Run Time Polymorphism
/*#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void speak()
    {
        cout << "Barking!" << endl;
    }
};
class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Speaking!" << endl;
    }
};
int main()
{
    Animal obj2;
    obj2.speak();
    Dog obj1;
    obj1.speak();
    Animal *ptr = new Dog();
    ptr->speak();
} */

// Compile Time Polymorphism
// 1.Function Overloading

/*#include <iostream>
using namespace std;

class printer
{
public:
    void print()
    {
        cout << "Printing" << endl;
    }
    void print(int print)
    {
        cout << "Printing" <<print<< endl;
    }
    void print(int name,char rating)
    {
        cout << "Printing" << endl;
    }
};
int main() {
    printer lazer;
    lazer.print();
}*/