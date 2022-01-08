#include <iostream>
using namespace std;

int main(){
    //code goes here..
    char a;
    cout << "Enter the Character: ";
    cin >> a;
    if(a=='a' || a=='e' || a=='i'|| a=='o'|| a=='u' || a=='A' || a=='E' || a=='I'|| a=='O'|| a=='U'){
        
        cout << a << " is Vowel" ;
    }
    else{
        cout << a << " is Consonant" ;

    }
    return 0;
}