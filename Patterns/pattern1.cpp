#include <iostream>
using namespace std;

int main(){
    //code goes here..
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int j=1; j <= n; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}