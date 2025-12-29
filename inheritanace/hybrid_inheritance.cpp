#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;

    void setName() {
        cout << "Enter name: ";
        cin >> name;
    }
};

// Derived class 1
class Student : virtual public Person {
public:
    int roll_no;

    void setRollNo() {
        cout << "Enter roll number: ";
        cin >> roll_no;
    }
};

// Derived class 2
class Teacher : virtual public Person {
public:
    string subject;

    void setSubject() {
        cout << "Enter subject: ";
        cin >> subject;
    }
};

// Hybrid inheritance
class Assistant : public Student, public Teacher {
public:
    void showDetails() {
        cout << "\n--- Assistant Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Assistant a;

    a.setName();
    a.setRollNo();
    a.setSubject();
    a.showDetails();

    return 0;
}
