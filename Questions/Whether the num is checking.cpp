#include <iostream>
using namespace std;

int main(){
    //code goes here..
    int a;
    cout << "Enter the Number: ";
    cin >> a;
    if(a>0){
        cout << "A is Positive";
    }
    else if(a<0){
        cout << "A is Negative";
    }
    else{
        cout << "A is Zero";

    }
    return 0;
}