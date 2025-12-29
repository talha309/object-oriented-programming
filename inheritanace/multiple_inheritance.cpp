#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
};
class Teacher{
    public:
    string subject;
    double salary;
};
class TA : public Student , public Teacher{
};
int main(){
    TA t1;
    t1.name = "Anas";
    t1.rollno = 123;
    t1.subject = "Computer Science";
    t1.salary = 100000;
    cout << "Name is :" << t1.name << endl;
    cout << "rollno is :" << t1.rollno << endl;
    cout << "subject is :" << t1.subject << endl;
    cout << "salary is :" << t1.salary << endl;
    return 0;
}