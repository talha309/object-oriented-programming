#include <iostream>
using namespace std;
class MyException {
    public:
    string message;
    MyException(string message){
        this->message = message;
    }
    void display(){
        cout << message << endl;
    }
};
int main(){
    try{
        throw MyException("This is a custom exception");
    }
    catch(MyException& e){
        e.display();
    }
    return 0;
}