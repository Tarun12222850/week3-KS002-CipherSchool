// STL Pt 1

#include <bits/stdc++.h>
using namespace std;

int main(){
    //  a vector is an array whose size is not fixed.
    vector<int> a;
    cout << "The size of the vector is : " << a.size() << endl;
    for(int i=0; i<5; i++){
        a.push_back(i+1);
    }

    cout << "The size of the vector is : " << a.size() << endl;

    a.pop_back();
    cout << "The size of the vector is : " << a.size() << endl;

    cout << "The first element of the vector is : " << a[0] << endl;
    for(auto i=a.begin(); i<a.end(); i++){
        cout << *i << " "; 
    }
    cout << endl;

    cout << "Capacity : " << a.capacity() << endl;
    return 0;
}