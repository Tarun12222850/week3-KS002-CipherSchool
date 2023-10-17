//  Comstructors and Deconstructor

#include <iostream>
using namespace std;

class complex{
    private :
    float real;
    float img;

    public:
    // complex(int real_value, int img_value){
    //     real = real_value;
    //     img = img_value;
    // }

    void set_parameters(int real, int img){
        this->real = real;
        this->img = img;
    }

    void sqdistancefromorigin(){
        float dist;
        dist = real*real + img*img;
        cout << "The distance from origin is : " << dist << endl;
        return;
    }
};

class New_account{
    public:
    int amount;
    int days;

    New_account(int amount, int days){
        this->amount = amount;
        this->days = days;
        cout << "The constructor is called now." << endl;
    }

    // void inital(){
    //     amount = 0;
    //     days =0 ;
    // }

    void print(){
        cout << "The amount is : " << amount << endl;
        cout << "The number of days is : " << days << endl;
    }

    ~New_account(){
        cout << "Now the use of the object is completye and the object is getting destroyed." << endl;
    }

};

int main(){
    complex a;
    // a.set_parameters(3, 4);
    // a.sqdistancefromorigin();

    // New_account b;
    // a.inital(); // we need to call this again and again to set the inital value
    New_account c(0, 0);
    c.print();
    New_account d(100, 5);
    d.print();
    cout << "Here all the fucnctions abd calculations take place." << endl;
    return 0;
}