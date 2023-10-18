// Object Oriented Programming Pt 1

#include <iostream>
using namespace std;

// class Student{
//     private:
//     int marks;
//     int attendence;
//     string name;

//     public:
//     void displaymarks(){
//         cout << marks;
//     }
// };

class vechile{
    public:
    int number_typers;
    string name;
    int capacity;
    int milage;

    public:
    void calculatemilage(){
        cout << "The milage is : " << milage << endl;
    }

};

class School_bus : public vechile{
    private:
    string school_name;
    int number_holidays;

    public:
    void printname(){
        cout << "The name of the school is : " << name << endl;
    }
};

class car : public vechile{
    private:
    int number_airbags;
    int ac_consumption;
};

int main(){
    car a;
    a.milage = 7;
    a.calculatemilage();
    return 0;
}