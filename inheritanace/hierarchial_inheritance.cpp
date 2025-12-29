#include <iostream>
#include <string>
using namespace std;
class Person{
    public:
    string name;
    int age;
};
class Student : public Person{
    public:
    int rollno;
};
class Teacher : public Person{
    public:
    string subject;
};
int main(){
    Student s1;
    s1.name = "Anas";
    s1.age = 20;
    s1.rollno = 123;
    cout << "Name is :" << s1.name << endl;
    cout << "age is :" << s1.age << endl;
    cout << "rollno is :" << s1.rollno << endl;
    return 0;
}
