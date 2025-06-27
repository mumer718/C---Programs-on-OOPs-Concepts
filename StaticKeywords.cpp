#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    static int count;  

    Student(string n) {
        name = n;
        count++;       
    }
    static void showCount() {  
        cout << "Total Students: " << count << endl;
    }
};
int Student::count = 0;

int main() {
    Student s1("Ali");
    Student s2("Umer");
    s1.showCount();
    Student::showCount();  

    return 0;
}
