//  Lecture

#include <iostream>
using namespace std;

int minandmax(int *a, int *min, int *max){
    int small = a[0], large = a[0]; 
    for(int i=0; i<=5; i++){
        if(a[i]>large){
            large = a[i];
        }
        if(a[i<small]){
            large = a[i];
        }
    }
}

int main(){
    int a[5];
    int min, max;
    for(int i=0; i<=5; i++){
        int b;
        a[i] = i;
    }
    minandmax(a, &min, &max);
    return 0;
}