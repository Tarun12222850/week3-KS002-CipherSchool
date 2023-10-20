// Lecture 18 - Bubble Sort

#include <iostream>
using namespace std;

int main(){
    int a[10];

    cout << "Enter the 10 element : ";
    for(int i=0; i<10; i++) cin >> a[i];

    int temp;
    for(int j=0; j<9; j++){
        for(int i=0; i<10-j; i++){
            if(a[i+1]<a[i]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }

    for(int i=0; i<10; i++) cout << a[i] << " ";
    cout << endl;
    
    return 0;
}