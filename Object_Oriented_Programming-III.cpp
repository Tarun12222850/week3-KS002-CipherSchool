// Object Oriented Programming Pt 3

/*
Learning Function overloading (this is called polymophism)
Operator Overloading
Abstraction - but the class in different code(file) and use it.
*/

#include <iostream>
using namespace std;

class Cooridnate{
    public:
    float a;
    float b;

    public:
    // operator overloading
    Cooridnate operator+(Cooridnate const &obj){
        Cooridnate z;
        z.a = this->a + obj.a;
        z.b = this->b + obj.b;
        return z;
    }

    // function overloading
    void sqdistancefromcooridante(float a){
            float dist;
            dist = (this->a - a)*(this->a - a) + (this->b - a)*(this->b - a);
            cout << dist;
        }

    void sqdistancefromcooridante(float a, float b){
        float dist;
        dist = (this->a - a)*(this->a - a) + (this->b - b)*(this->b - b);
        cout << dist;
    }
    void sqdistancefromcooridante(float a, float b, float c){
        float dist;
        dist = (this->a - a)*(this->a - a) + (this->b - b)*(this->b - b);
        cout << dist << endl <<"The third function is called." << endl;
    }
};

int main(){
    Cooridnate x;
    x.a = 3;
    x.b = 4;
    // x.sqdistancefromcooridante(0, 0, 0);

    Cooridnate y;
    y.a = 5;
    y.b = 6;

    Cooridnate z;
    z = x+y;
    // z=x-y;
    cout << "The coordinates after the addition are : " << z.a << " " << z.b << endl;
    return 0;
}