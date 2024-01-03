
// WAP to create a class to read time in seconds and convert into time in (HH:MM:SS) format.


#include<iostream>
using namespace std;
class Math
{
    public:


    int h,m,s;


    void setdata()
    {
        cout<<"Enter the value of the second :="<<endl;
        cin>>s;
    }


    void getdata()
    {
        // cout<<"Hour :="<<h<<endl;
        // cout<<"Minute :="<<m<<endl;
        cout<<"Second :="<<s<<endl;
    }


    void result(Math m1)
    {
        Math m2;


        m2.h = m1.h;


        if(m2.s>=60)
        {
            m2.m++;
            m2.s = m2.s - 60;
        }


        if(m2.m>=60)
        {
            m2.h++;
            m2.m = m2.m - 60;
        }
    }


   
};
int main()
{
    Math m1,m2;


    m1.setdata();
    // m1.getdata();
    m2.result(m1);


}