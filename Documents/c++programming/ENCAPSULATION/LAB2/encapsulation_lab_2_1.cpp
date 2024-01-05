
// WAP to make Railway Reservation System.
// Requirements:
// (A) User Input Train Number , Train Name , Source , Destination , Train Time.
// (B) Display Record By Search Train Number.
// (C) Minimum 3 Input Train Record.


#include<iostream>
using namespace std;
class rail
{

    public:

    int train_number,train_time;
    char train_name[100],destination[100],source[100];

    void setdata()
    {
        cout<<"Enter the train number :=";
        cin>>train_number;

        cout<<"Enter the train name :=";
        cin>>train_name;

        cout<<"Enter the train time :=";
        cin>>train_time;

        cout<<"Enter the train source :=";
        cin>>source;

        cout<<"Enter the train destination :=";
        cin>>destination;
    }
        
        void getdata()
        {
            cout<<train_number<<"\t"<<train_name<<"\t"<<train_time<<"\t"<<source<<"\t"<<destination<<endl;

        }
        

    


};
int main()
{
    rail t[100];
    int i,n;

    cout<<"Enter the train data size :=";
    cin>>n;

    for(i=0;i<n;i++)
    {
        t[i].setdata();
    }
    int number; 

    cout<<"Enter the train number which trains data you want :=";
    cin>>number;

    for(i=0;i<n;i++)
    {
        if(number == t[i].train_number)
        {
           t[i].getdata();
        }
    }




    
}