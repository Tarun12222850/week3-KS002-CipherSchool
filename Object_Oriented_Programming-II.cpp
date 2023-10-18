// Object Oriented Programming Pt 2

/*
Mode
Learnt about the inheritance, modes of inheritance and different type of inheritance

Modes of inheritance : 
1.  Private
2.  Protected
3.  Public

Different type of inheritance : 
1.  Simple inheritance
2.  Multiple inheritance
3.  Multilevel inheritance
*/

#include <iostream>
using namespace std;

class vechile{
    public:
    int number_typers;
    string name;
    int capacity;
    int milage;

    void calulatemilage(){
        cout << "The milage is : " << this->milage << endl;
    }
};

class School_bus : public vechile{
    private:
    string school_name;
    int number_holidays;

    public:
    void printname(){
        cout << "School Bus : " << name << endl;
    }

    
};

class car : public vechile{
    private:
    int number_airbags;
    int ac_consumption;

    public:


    // void set_milage(int milage){
    //     this->milage = milage;
    // }

    // void calulatemilage(){
    //     cout << "The milage is : " << this->milage << endl;
    // }

    void printname(){
        cout << name << endl;
    }
};

class SUV : public car{
    public:
    int four_wheel_drive;
};

int main(){
    // car a;
    // a.milage = 50;
    // a.set_milage(7);
    // a.calulatemilage();

    // SUV d; // multi level inheritance
    // d.milage = 15;
    
    car a;
    School_bus b;
    a.name = "Mustang";
    b.name = "Mercides";
    a.printname();
    b.printname();
    return 0;
}