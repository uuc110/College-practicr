#include <iostream>
using namespace std;

int main(){
    //code goes here..
    int a,b;
    cout << "Enter the age of two students: ";
    cin >> a >> b;
    if(a>b){
        cout << "A's age is greater than B's";
    } 
    else {
        cout << "B's age is greater than A's";
    }
    return 0;
}