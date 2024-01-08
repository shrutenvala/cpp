

//WAP to create a class Employee with setter and getter. Which have fields
//like id, name, role, salary, experience, address, email, and contact. Get 5 records

#include<iostream>
using namespace std;
class EMP
{
    public:

    int ID,salary,contact;
    char name[100],role[100],experience[100],address[100],email[100];

    void setdata()
    {
        cout<<"Enter the epmloyee ID :=";
        cin>>ID;

        cout<<"Enter the epmloyee name :=";
        cin>>name;

        cout<<"Enter the epmloyee role :=";
        cin>>role;

        cout<<"Enter the epmloyee experience :=";
        cin>>experience;

        cout<<"Enter the epmloyee salary :=";
        cin>>salary;

        cout<<"Enter the epmloyee email :=";
        cin>>email;

        cout<<"Enter the epmloyee contact:=";
        cin>>contact;

        cout<<"Enter the epmloyee address: =";
        cin>>address;
    }
    void getdata()
    {
        cout<<ID<<"\t"<<name<<"\t"<<role<<"\t"<<experience<<"\t"<<salary<<"\t"<<email<<"\t"<<contact<<"\t"<<address<<endl;
    }
};
int main()
{
    EMP e1,e2,e3,e4,e5;

    e1.setdata();
    e2.setdata();
    e3.setdata();
    e4.setdata();
    e5.setdata();


    e1.getdata();
    e2.getdata();
    e3.getdata();
    e4.getdata();
    e5.getdata();
}