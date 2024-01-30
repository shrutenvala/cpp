
// Overload the `+` operator for the `BankAccount` class to display account details. Create two `BankAccount` objects and demonstrate the use of the overloaded `+` operator to display total amount of both accounts.
#include <iostream>
using namespace std;

class BankAccount 
{
public:

    double balance;

    

    BankAccount operator+( BankAccount) 
    {
        BankAccount (this->balance + account1.balance);
    }

    void displayAccountDetails() 
    {
        cout << "Account Balance:=" << balance << endl;
    }
};

int main() 
{

    BankAccount account1(1000);
    BankAccount account2(500);

    BankAccount total = account1 + account2;

    cout << "Account 1 Details:=" << endl;
    account1.displayAccountDetails();

    cout << "Account 2 Details:=" << endl;
    account2.displayAccountDetails();

    cout << "Total Amount after adding both accounts:=" << endl;
    total.displayAccountDetails();

}
