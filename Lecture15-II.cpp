// Lecture 15 II- Character Array And Strings Pt 2

#include <iostream>
#include <string>
using namespace std;

int main(){
    string nam; // string is datatype
    // there is null character at the en dof the string that is '/0'
    cout << "Enter your name : " ;
    cin >> nam;
    cout << nam << endl;

    for(int i=0; i<5; i++){
        cout << nam[i] << endl;
    }

    string a;
    string b;
    cout << "Enter full name : ";
    cin >> a >> b;
    cout << "The string you entered is : " << a << b << endl;

    string c;
    c = a+b; //concatenation
    cout << "The combined word is : " << c << endl;
    cout << "Length of the combined word : " << c.length() << endl;
    cout << endl << endl;
    // taking string as statement means with space
    string f;
    cout << "Enter your full name : ";
    cin.ignore();
    getline(cin, f);
    cout << "Your name is : " << f << endl;
    return 0;
}