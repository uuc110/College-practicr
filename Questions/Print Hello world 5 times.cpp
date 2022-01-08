#include <iostream>
using namespace std;

int main(){
    //code goes here..
    int n;
    cout << "Enter the Number of time you want to print 'Hello World': ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Hello World" << endl;
    }
    
    return 0;
}