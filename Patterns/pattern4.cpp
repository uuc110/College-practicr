#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows to process" << endl;
    cin >> n;
    int k=1;
    for(int i=1; i<=n; i++){
        for (int j = 1; j <= n-i+1; j++)
        {
            cout << " "<<k;
            k++;
        }
        cout << endl;
    }
    return 0;
}