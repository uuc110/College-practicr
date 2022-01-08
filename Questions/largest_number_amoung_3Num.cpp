#include <iostream>
using namespace std;

int main(){
    //code goes here..
    int a,b,c;
    cout << "Enter the three numbers: ";
    cin >> a >> b >> c;
    if(a>b || a>c){
        cout << "A is greater: " << a;
    }
    else if(b>c){
        cout << "B is greater: " << b;
    }
    else{
        cout << "C is greatest: " << c;

    }
    return 0;
}