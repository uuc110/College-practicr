#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter the Number: ";
    cin >> a;
    if(a%2==0){
        cout << "A is Even";
    }
    else{
        cout << "A is Odd";
    }
    return 0;
}