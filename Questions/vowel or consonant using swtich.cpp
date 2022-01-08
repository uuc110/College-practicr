#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter the Alphabet: ";
    cin >> ch;


    switch(ch){ //Hint: Use character in --> ''
        case 'a': cout << "Vowel" << endl; break;
        case 'e': cout << "Vowel" << endl; break;
        case 'i': cout << "Vowel" << endl; break;
        case 'o': cout << "Vowel" << endl; break;
        case 'u': cout << "Vowel" << endl; break;
        case 'A': cout << "Vowel" << endl; break;
        case 'E': cout << "Vowel" << endl; break;
        case 'I': cout << "Vowel" << endl; break;
        case 'O': cout << "Vowel" << endl; break;
        case 'U': cout << "Vowel" << endl; break;
       
        default: cout << "Consonant";
    }
    return 0;
}