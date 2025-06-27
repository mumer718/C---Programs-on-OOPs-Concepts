#include<iostream>
#include<string>
using namespace std;
class User {
    int ID;
    string name;

public:
User(int i=0,string n="") {
    i=ID;
    n=name;
    cout<<"This is default Constructor! "<<endl;
}
~User() {
    cout<<"This is Destructor! "<<endl;
}
};
int main() {
    User u1;
}