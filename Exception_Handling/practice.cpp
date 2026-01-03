#include <iostream>
using namespace std;
int main(){
    try{
        throw runtime_error("error");
    }
    catch(runtime_error& e){
        cout << e.what() << endl;
    }
    return 0;
}