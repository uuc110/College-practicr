#include <iostream>
using namespace std;

int main(){
    //code goes here..
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i=n; i>=0; i--){
        for(int j=0; j<=n; j++){
            if (j>=i) // Just add SPACE//
            {
            cout << " *";
            }
            else{
                cout << " ";
            }            
        }
        cout << endl;
    }
    return 0;
}