#include <iostream>
using namespace std;

int main(){
    int ch;
    cout << "NOTE:: Day is Starting from the Sunday as 1"<< endl;
    cout << "Enter the Day of the week: ";
    cin >> ch;
    switch (ch)
    {
    case 1: cout << "Sunday";
        break;
    case 2: cout << "Monday";
        break;
    case 3: cout << "Tuesday";
        break;
    case 4: cout << "Wednesday";
        break;
    case 5: cout << "Thusday";
        break;
    case 6: cout << "Friday";
        break;
    case 7: cout << "Saturday";
        break;
    
    default: cout << "You have Entered the Wrong day of the week." << endl;
        break;
    }
    return 0;
}