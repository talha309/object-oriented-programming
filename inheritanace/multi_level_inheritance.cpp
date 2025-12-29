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
class GradStudent : public Student{
    public:
    string researchArea;
};  
int main(){
    GradStudent g1;
    g1.name = "Anas";
    g1.age = 20;
    g1.rollno = 123;
    g1.researchArea = "Machine Learning";
    cout << "Name is :" << g1.name << endl;
    cout << "age is :" << g1.age << endl;
    cout << "rollno is :" << g1.rollno << endl;
    cout << "researchArea is :" << g1.researchArea << endl;
    return 0;
}