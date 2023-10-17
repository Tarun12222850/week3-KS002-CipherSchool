// "this" Pointer

#include <iostream>
using namespace std;

class Bank_client{
    private: // but if we didin't assign any then it will be private which means that it only used with in the class

    int credit_no;
    int cvv;
    string user_name;
    string password;

    public:
    string name;
    
    // to get private data we use public function
    // we use set function to set the data and get function to get the value of the private member
    void set_credit_no(int credit_no){
        this->credit_no = credit_no;
        cout << "The address of the object calling this function : " << this << endl;
    }

    void get_credit_no(){
        cout << "The credit card number : " << credit_no << endl;
    }
    
    void get_all_stuff(string naam, int cv, string username, string pass){
        this->name = name;
        this->cvv = cvv;
        this->credit_no = credit_no;
        this->user_name = user_name;
        this->password = password;
    }
};

int main(){
    Bank_client d, e;
    d.name = "Tarun";
    
    d.set_credit_no(87451646);
    cout << "The address of this object is : " << &d << endl;
    return 0;
}