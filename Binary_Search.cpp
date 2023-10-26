#include <iostream>
using namespace std;

void simplesearch(int* arr, int left, int right, int val){
    for(int i=left; i<=right; i++){
        if(arr[i] == val){
            cout << "Congrats your value is present in the story." << endl;
            return;
        }
    }
    cout << "Sad bro, yourvalue is not present in the array." << endl;
}

int binarysearch(int *arr, int l , int r, int val){
    int middle;
    middle = l + (r-l)/2;
    if(r>=l){
        if(arr[middle] ==val){
            return 1;
        }
        else if(arr[middle]>val){
            // then value will be on the left on the middle element
            return binarysearch(arr, l, middle-1, val);
        }
        else{
            return binarysearch(arr, middle+1, r, val);
        }
    }
    return -1;
}

int main(){
    // int arr[7] = {1, 3, 10, 2, 4, 7, 5};
    int arr[7] = {1, 2, 3, 4, 5, 7, 10};
    int size = 7; 
    simplesearch(arr, 0, 6, 13);
    simplesearch(arr, 0, 6, 10);

    if(binarysearch(arr, 0, 6, 13)==1) cout << "Your value is present in the array." << endl;
    else cout << "Your value is not present in the array." << endl;

    return 0;
}