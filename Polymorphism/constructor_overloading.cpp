#include <iostream>
#include <string>
using namespace std;
class Print{
    public:
    Print(){
        cout << "I am a non-parameterized constructor" << endl;
    }
    Print(int a){
        cout << "I am a parameterized constructor" << endl;
    }
};
int main(){
    Print p;
    Print p1(10);
    return 0;
}