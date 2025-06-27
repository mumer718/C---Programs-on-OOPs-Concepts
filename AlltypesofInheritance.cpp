#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    int ID;
    string name;

public:
    Person(int id = 0, string n = "Unknown") {
        ID = id;
        name = n;
    }

    void displayPerson() {
        cout << "ID: " << ID << ", Name: " << name << endl;
    }
};
class Student : public Person {
protected:
    string institute;

public:
    Student(int id, string n, string inst)
        : Person(id, n), institute(inst) {}

    void displayStudent() {
        displayPerson();
        cout << "Institute: " << institute << endl;
    }
};
class GraduateStudent : public Student {
    string degree;

public:
    GraduateStudent(int id, string n, string inst, string deg)
        : Student(id, n, inst), degree(deg) {}

    void displayGraduate() {
        displayStudent();
        cout << "Degree: " << degree << endl;
    }
};
class ExamDetails {
protected:
    int marks;

public:
    ExamDetails(int m = 0) {
        marks = m;
    }

    void displayMarks() {
        cout << "Marks: " << marks << endl;
    }
    void displystudent();
};
class Result : public Person, public ExamDetails {
public:
    Result(int id, string n, int m) : Person(id, n), ExamDetails(m) {}

    void displayResult() {
        displayPerson();
        displayMarks();
    }
};
class Teacher : public Person {
    string subject;

public:
    Teacher(int id, string n, string sub)
        : Person(id, n), subject(sub) {}

    void displayTeacher() {
        displayPerson();
        cout << "Subject: " << subject << endl;
    }
};
class Exam : public Student {
protected:
    int midMarks;

public:
    Exam(int id, string n, string inst, int m)
        : Student(id, n, inst), midMarks(m) {}

    void displayExam() {
        displayStudent();
        cout << "Mid Marks: " << midMarks << endl;
    }
};

class FinalResult : public Exam, public ExamDetails {
public:
    FinalResult(int id, string n, string inst, int mid, int final)
        : Exam(id, n, inst, mid), ExamDetails(final) {}

    void displayFinalResult() {
        displayExam();
        displayMarks();  
    }
};
int main() {
    cout <<"Single Inheritance:\n";
    Student s1(101, "Ali", "FAST");
    s1.displayStudent();

    cout <<"Multilevel Inheritance:\n";
    GraduateStudent gs1(102, "Zara", "NUST", "BSCS");
    gs1.displayGraduate();

    cout <<"Multiple Inheritance:\n";
    Result r1(103, "Umer", 88);
    r1.displayResult();

    cout <<"Hierarchical Inheritance:\n";
    Teacher t1(104, "Hina", "Math");
    t1.displayTeacher();

    cout <<"Hybrid Inheritance:\n";
    FinalResult fr1(105, "Ahmed", "GIKI", 40, 85);
    fr1.displayFinalResult();

    return 0;
}
