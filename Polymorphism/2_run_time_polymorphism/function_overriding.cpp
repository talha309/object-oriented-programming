#include <iostream>
#include <string>
using namespace std;
class Parent{
    public:
    void getInfo(){
        cout << " parent class" << endl;
    }

    virtual void hello(){
        cout << " hello from parent class " << endl;
    }
};
class Child : public Parent{
    public:
    void getInfo(){
        cout << " child class " << endl;
    }
    void hello(){
        cout << " hello from child class " << endl;
    }
};
int main(){
    Child c;
    c.getInfo();
    c.hello();
    return 0;
}