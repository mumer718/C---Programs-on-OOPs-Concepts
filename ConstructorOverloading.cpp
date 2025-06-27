#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string name;
    int year;

    Book() {
        title = "Unknown";
        name = "Unknown";
        year = 0;
        cout << "Default Constructor Called!" << endl;
    }
    Book(string t) {
        title = t;
        name = "Unknown";
        year = 0;
        cout << "Constructor with 1 parameter called!" << endl;
    }
    Book(string t, string n, int y) {
        title = t;
        name = n;
        year = y;
        cout << "Constructor with 3 parameters called!" << endl;
    }
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << name << endl;
        cout << "Year: " << year << endl;
    }
};
int main() {
    Book b1;                  
    Book b2("DSA in C++");   
    Book b3("OOP", "Umer", 2025);

    b1.display();
    b2.display();
    b3.display();
}
