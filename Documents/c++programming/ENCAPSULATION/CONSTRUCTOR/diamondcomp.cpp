
// WAP to get and display N numbers of Diamond
// companies information using encapsulation and use of
// parameterised constructor by including below
// mentioned attributes:
// - comp_id
// - comp_name
// - comp_staff_quantity
// - comp_revenue (per year)
// - comp_import_raw_diamonds (no. of raw diamonds
// imported per year)
// - comp_export_diamonds (no. of diamonds per year)
// - comp_ceo (name of CEO of the company)

#include<iostream>
#include<string.h>
using namespace std;
class diamond
{
    public:

    int id,staff;
    char name[100];

    diamond(int id,char name[],int staff)
    {
       this->id=id;
       strcpy(this->name,name);
       this->staff=staff;
    }

    void getdata()
    {
        cout<<id<<"\t"<<name<<"\t"<<staff<<endl;
    }


};
int main()
{
    int i,s,j,l;
    char n[100];

    cout<<"Enter the compony size list";
    cin>>l;
    
    for(j=0;j<l;j++)
    {
        cout<<"Enter the ID, NAME , STAFF";
        cin>>i>>s>>n;

        diamond d1(i,n,s);
        d1.getdata();
    }


}