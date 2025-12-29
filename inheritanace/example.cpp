#include <iostream>
#include <string>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
    Person(){
        cout << "parent constructor called" << endl;
    }
};
class Student : public Person{
    public:
    int rollno;
    Student(string name, int age, int rollno): Person(name, age){
        this->rollno = rollno;
    }
    void getInfo(){
        cout <<"Name is :" << name << endl;
        cout << "age is :" << age << endl;
        cout << "rollno is :" << rollno << endl;
    }
};
int main(){
    Student s1("Anas", 20, 123);
    s1.getInfo();
    return 0;
}