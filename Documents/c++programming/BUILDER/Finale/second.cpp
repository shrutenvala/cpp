 
// Define a class named `BankAccount` with private attributes `accountNumber`, `balance`, and `ownerName`. Encapsulate these attributes using appropriate access specifiers. Implement public member functions to credit, debit, and display the balance. Demonstrate encapsulation by interacting with the class through its member functions.


#include<iostream>
using namespace std;

class BankAccount
{
    private:

    int accountNumber;
    int balance;
    int credit;
    int debit;
    char ownerName[100];

    public:

    void setdata()
    {
        cout<<"Enter your account number :=";
        cin>>accountNumber;

        cout<<"Enter the owner name :=";
        cin>>ownerName;

        cout<<"Enter your credited amount :=";
        cin>>credit;

        cout<<"Enter your debited account :=";
        cin>>debit;

        cout<<"Enter your bank balance :=";
        cin>>balance;
        
        
    }

    void getdata()
    {
        cout<<"Account number :="<<accountNumber<<endl;
        cout<<"Owner name :="<< ownerName<<endl;
        cout<<"Credit :="<< credit<<endl;
        cout<<"Debit :="<< debit<<endl;
        cout<<"Available :="<< balance<<endl;
    }

};
int main()
{
    BankAccount b1;

    b1.setdata();
    b1.getdata();
}