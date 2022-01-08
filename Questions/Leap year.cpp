#include <iostream>
using namespace std;

int main(){

    int a;
    cout << "Enter the Year: ";
    cin >> a;
    
    if(a%4==0 && a%400==0 || a%100!=0){
        
        cout << a << " is a Leap year";
    }

    else{
        cout << a << " is Not a Leap year";
    }

    return 0;
}