#include <iostream>
using namespace std;

int main(){
    //code goes here..
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i=n; i>=1; i--){
        for(int j=1; j<=n;j++){
            if (j>=i)
            {
                cout << fact(i)/(()) ;
            }
            else
            {
                cout << " ";
            }
        }
            cout << endl;
    }
    return 0;
}

    int fact(int a){
        int f=1;
        while(a>1){
            f*=a;
            a--;
        }
        return f;
    }