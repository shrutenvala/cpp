
//WAP to get and display 5 Customers
// information using encapsulation by including
// below mentioned attributes:

#include<iostream>
using namespace std;
class custom
{
    private:

    int cust_id,cust_age,cust_mobile_number,cust_simcard_validity;
    char cust_name[100],cust_telecome_brand_name[100],cust_city[100];

    public:

    void setdata()
    {
        cout<<"Enter the customer ID:= ";
        cin>>cust_id;

        cout<<"Enter the customer mobile number :=";
        cin>>cust_mobile_number;

        cout<<"Enter the customer name :=";
        cin>>cust_name;

        cout<<"Enter the customer simcard validity :=";
        cin>>cust_simcard_validity;

        cout<<"Enter the customer's telecome brand name :=";
        cin>>cust_telecome_brand_name;

        cout<<"Enter the customer age :=";
        cin>>cust_age;

        cout<<"Enter the customer city :=";
        cin>>cust_city;
    }

    void getdata()
    {
        cout<<cust_id<<"\t"<<cust_mobile_number<<"\t"<<cust_name<<"\t"<<cust_simcard_validity<<"\t"<<cust_telecome_brand_name<<"\t"<<cust_age<<"\t"<<cust_city<<endl;
    }

};
int main()
{
    custom f1,f2,f3,f4,f5;

    f1.setdata();
    f2.setdata();
    f3.setdata();
    f4.setdata();
    f5.setdata();

    f1.getdata();
    f2.getdata();
    f3.getdata();
    f4.getdata();
    f5.getdata();

}

