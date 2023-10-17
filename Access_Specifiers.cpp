// Access Specifier

#include <iostream>
using namespace std;

class Student{
    public: // we created it public which is accessible to everyone
    string name;
    int attendence;
    float total_marks;

    void calculate_percentage(){
        cout << total_marks << " %" << endl;
    }
};

class Bank_client{
    private: 
    // but if we didin't assign any then it will be private which means that it only used with in the class
    int credit_no;
    int cvv;
    string user_name;
    string password;

    public:
    string name;
    // to get private data we use public function

    // we use set function to set the data and get function to get the value of the private member
    void set_credit_no(int number){
        credit_no = number;
    }

    void get_credit_no(){
        cout << "The credit card number : " << credit_no << endl;
    }

    
    // void get_all_stuff(string naam, int cv, int credit_number, string username, string pass){
    //     name = naam;
    //     cvv = cv;
    //     credit_no = credit_number;
    //     user_name = username;
    //     passwrod = pass;
    // }
};

int main(){
    Student a, b,c ; // student is class and a, b, c are object of the class
    a.name = "Aadi";
    a.attendence = 90;
    a.total_marks = 78;
    a.calculate_percentage();

    cout << endl;

    Bank_client d, e;
    d.name = "Tarun";
    // d.password = "t@run132";
    // d.cvv = 546;
    // d.credit_no = 89461546;
    // cout << "The passwor of Tarun is : " << d.password << endl;

    d.set_credit_no(87451646);
    d.get_credit_no();
    return 0;
}