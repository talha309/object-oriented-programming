#include <iostream>
#include <string>
using namespace std;
class Print{
    public:
    void show(int a){
        cout << "The value of a is: " << a << endl;
    }
    void show(char ch){
        cout << "The value of ch is: " << ch << endl;
    }
};
int main(){
    Print p;
    p.show(10);
    return 0;
}