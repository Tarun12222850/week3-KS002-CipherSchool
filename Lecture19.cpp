// Lecture 19 - Insertion Sort

#include <iostream>
using namespace std;

int main(){
    int a[10];
    cout << "Enter the 10 elements in the array : ";
    for(int i=0; i<10; i++) cin >> a[i];

    cout << "Elements before the sorting : ";
    for(int i=0; i<10; i++) cout << a[i] << " ";
    cout << endl;

    int i;
    for(int j=1; j<10; j++){
        int key = a[j];
        i = j-1;
        while(a[i]>key && i>=0){
            a[i+1] = a[i];
            i--;
        }
        a[i+1] = key;
    }

    cout << "Elements after the sorting : ";
    for(int i=0; i<10; i++) cout << a[i] << " ";

    return 0;
}