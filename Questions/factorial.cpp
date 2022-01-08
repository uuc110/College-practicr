#include <iostream>
using namespace std;

int main(){
    //code goes here..
    int n;
    cout << "Enter the Number you to find the factorial of: ";
    cin >> n;
    int a=1;
    while(n>1){
        a=a*n;
        n--;
    }
    cout << a<< endl;
    return 0;
}