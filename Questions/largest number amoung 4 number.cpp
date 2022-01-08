#include <iostream>
using namespace std;

int main(){
    //code goes here..
    int a,b,c,d;
    cout << "Enter the four numbers: ";
    cin >> a >> b >> c >> d;
    if(a>b && a>c && a>d){
        cout << a << " is greater" ;
    }
    else if(b>c && b>d){
        cout << b << " is greater";
    }
    else if(c>d){
        cout << c << " is greater" ;
    }
    else{
        cout << d << " is greatest" ;

    }
    return 0;
}