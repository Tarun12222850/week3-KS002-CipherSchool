// STL Pt 2

#include <iostream.>
#include <stack>
#include <queue>
#include <map>
#include <list>
using namespace std;

int main(){
    stack <int>a;
    a.push(5);
    a.push(6);
    a.push(7);

    cout << a.top() << endl;
    a.pop();
    cout << a.top() << endl;

    if (a.empty()==0) cout << "Stack is not empty." << endl;
    else cout << "Stack is empty." << endl ;
    a.pop();
    a.pop();
    if (a.empty()==0) cout << "Stack is not empty." << endl;
    else cout << "Stack is empty." << endl ;

    cout << endl << endl;
    
    //  queue
    queue <int>b;
    b.push(5);
    b.push(6);
    b.push(7);

    cout << b.front() << endl;
    b.pop();
    cout << b.back() << endl;

    if (b.empty()==0) cout << "Queue is not empty." << endl;
    else cout << "Queue is empty." << endl ;
    b.pop();
    b.pop();
    if (b.empty()==0) cout << "Queue is not empty." << endl;
    else cout << "Queue is empty." << endl ;

    cout << endl << endl;

    // map
    map<string, int> hash;
    hash["aadi"] = 1;
    hash["tarun"] = 2;
    hash["jai"] = 3;

    // cout << "The value of abhishek is in the hash table is " << hash["abhishek"] << endl;

    for(auto j=hash.begin(); j!=hash.end(); j++){
        cout << "the key will be " << j->first << " the value in the key will be " << j->second << endl;
    }

    cout << endl << endl;

    // list
    list<int> l;
    l.push_back(4);
    l.push_front(2);
    l.push_back(4);
    l.push_front(2);

    l.pop_back();
    l.pop_front();

    l.sort();
    for(auto i=l.begin(); i!=l.end(); i++){
        cout << *i << " ";
    }
    return 0;
}