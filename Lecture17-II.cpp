// Lecture 17 II - Selection Sort Pt 2

#include <iostream>
using namespace std;

int main(){
    int a[10];
    cout << "Enter the 10 element in the array : ";
    for(int i=0; i<10; i++) cin>>a[i];

    cout << "The Element before sorting are : ";
    for(int i=0; i<10; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    int least_index = 0;
    for(int i=0; i<10-9; i++){
        for(int j=i; j<10; j++){
            if(a[j]<a[least_index]){
                least_index = j;
            }
        }
        int temp = a[0];
        a[0] = a[least_index];
        a[least_index] = temp;
    }
    
    cout << "The Element after sorting are : ";
    for(int i=0; i<10; i++){
        cout << a[i] << " ";
    }

    return 0;
}