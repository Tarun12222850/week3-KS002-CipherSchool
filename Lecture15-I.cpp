// Lecture 15 I- Character Array And Strings Pt 1

#include <iostream>
using namespace std;

int main(){
    char a, e, d, i;
    cout << "Your name please : ";
    cin >> a>>e>>d>>i;
    cout << "Your name is : " << a << e << d << i<< endl;

    cout << endl;

    char name[4];
    cout << "Enter you name : ";
    for(int i=0; i<4; i++){
        cin >> name[i];
    }
    cout << "Your name is : ";
    for(int i=0; i<4; i++){
        cout << name[i];
    }

    cout << endl << endl;
    // above code is only when you know what name you are going to entered

    char n[1000];
    cout << "Enter your name (Note : Enter # when name is ended) : ";
    int r=0;
    while(1){
        cin >> n[r];
        if (n[r]=='#') break;
        r++;
    }
    r=0;
    cout << "Your name is : ";
    while(n[r]!='#'){
        cout << n[r];
        r++;
    }

    cout << endl << endl;

    string nam; // string is datatype
    cout << "Name is : " ;
    cin >> nam;
    cout << nam;

    return 0;
}