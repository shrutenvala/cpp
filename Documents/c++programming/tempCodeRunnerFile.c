
// WAP to make a Supermarket Billing System.
// Requirements:
// (A) Verify User Id And Password
// (B) User Input Item Number , Item Name , Quantity , Tax , Discount.
// (C) Display All Record In Ascending order (by item Number)

#include<iostream>
using namespace std;
class bill
{
    public:
     
    int item_number,quantity,tax,discount;
    char item_name[100];

    void setdata()
    {
        cout<<"Enter the item number :=";
        cin>>item_number;

        cout<<"Enter the item name :=";
        cin>>item_name;

        cout<<"Enter the item quantity :=";
        cin>>quantity;

        cout<<"Enter the item tax :=";
        cin>>tax;

        cout<<"Enter the item discount :=";
        cin>>discount;        
    }
    void getdata()
    {
        cout<<item_number<<"\t"<<item_name<<"\t"<<quantity<<"\t"<<tax<<"\t"<<discount<<endl;
    }
};
int main()
{
    bill b1;

    int id,pass;

    cout<<"Enter your ID :=";
    cin>>id;

    cout<<"Enter your PASSWORD :=";
    cin>>pass;

    if((id==7315) && (pass==8888))
    {
        cout<<"You successfully logged in the"<<endl;
        cout<<endl<<"–––––––––––––––Welcome to the out store–––––––––––––––"<<endl<<endl;

        bill b[100];

        int i,n;

        cout<<"Enter the list of items :=";
        cin>>n;

        for(i=0;i<n;i++)
        {
            b[i].setdata();
        }
        for(i=0;i<n;i++)
        {
            b[i].getdata();
        }
    }
    else
    {
        cout<<endl<<endl<<endl<<"*****  You entered wrong ID or PASSWORD  *****";
    }

}