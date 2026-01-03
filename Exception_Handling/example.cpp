#include <iostream>
using namespace std;
int main(){
    try{
        int a = 10;
        int b = 0;
        if(b==0){
            throw b;
        }
        else{
            cout << "division is " << a/b << endl;
        }
    }
    catch(int b){
        cout << "division by zero" << endl;
    }
    return 0;
}