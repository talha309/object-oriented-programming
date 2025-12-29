#include <iostream>
using namespace std;

// Parent class
class Person {
public:
    string name;

    void setName() {
        cout << "Enter name: ";
        cin >> name;
    }

    void showName() {
        cout << "Name: " << name << endl;
    }
};

// Child class
class Student : public Person {
public:
    int roll_no;

    void setRollNo() {
        cout << "Enter roll number: ";
        cin >> roll_no;
    }

    void showStudent() {
        showName();
        cout << "Roll No: " << roll_no << endl;
    }
};

int main() {
    Student s;
    s.setName();
    s.setRollNo();
    s.showStudent();

    return 0;
}
