#include <iostream>
using namespace std;

int main(){
    int ch;
    int a,b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    cout << "Enter the Value of ch: "<< endl;
    cout << "1 for Addiction"<< endl;
    cout << "2 for Subtract"<< endl;
    cout << "3 for Multiplication"<< endl;
    cout << "4 for Division"<< endl;
    cout << "5 for Modulas"<< endl;
    cin >> ch;


    switch(ch){
        case 1: cout << "Addiction of numbers: " << a+b; break;
        case 2: cout << "Subtract of numbers: " << a-b; break;
        case 3: cout << "Multiplicatio of numbers: " << a*b; break;
        case 4: cout << "Division of numbers: " << a/b; break;
        case 5: cout << "Modulas of numbers: " << a%b;
        break;
        default: cout << "Enter the correct the Symbol";
    }
    return 0;
}