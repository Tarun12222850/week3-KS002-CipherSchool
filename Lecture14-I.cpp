// Lecture 14 I - Parameter Passing and Return Types Pt 1

#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int c;
    c = *x;
    *x = *y;
    *y = c;
    cout << "The swapping comleted." << endl;
}

int main(){
    int a, b; 
    a=3;
    b=4;
    swap(&a, &b); // passing the address of a and b
    cout << "The value of a and b is : " <<a << " " << b << endl;

    cout << endl;

    // array inside a function
    int c[10];
    cout << "Value for comparision : " << endl;
    cout << "The value of c      : " << c <<  endl;
    cout << "The address of c[0] : " << &c[0] <<  endl;
    cout << "The address of c[1] : " << &c[1] <<  endl;

    return 0;
}