#include <iostream>
using namespace std;

int main(){
    //code goes here..
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i=n; i>=0; i--){
        for(int j=0; j<=n; j++){
            if (j>=i) // So like when i= 4, j=1 and that is false, for that it will print " ", while for j=4 i=4 it will print *, NOW YOU WILL GET IT SOURABH//
            {
            cout << "*";
            }
            else{
                cout << " ";
            }            
        }
        cout << endl;
    }
    return 0;
}