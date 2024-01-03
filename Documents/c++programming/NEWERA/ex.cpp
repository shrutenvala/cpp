
//WAP to create a class to read and add two times.


#include<iostream>
using namespace std;
class Math
{
    public:


    int Hour,Minute,Second;


    void setdata()
    {
        cout<<"Enter the value of the hour :="<<endl;
        cin>>Hour;


        cout<<"Enter the value of the minute :="<<endl;
        cin>>Minute;


        cout<<"Enter the value of the second :="<<endl;
        cin>>Second;
    }


    void getdata()
    {
        cout<<"Hour :="<<Hour<<endl;
        cout<<"Minute :="<<Minute<<endl;
        cout<<"Second :="<<Second<<endl;
    }


    void result(Math m1 , Math m2)
    {
        Math m3;


        m3.Hour = m1.Hour + m2.Hour;
        m3.Minute = m1.Minute + m2.Minute;
        m3.Second = m1.Second + m2.Second;


        while(m3.Minute>=60)
        {
            m3.Hour++;
            m3.Minute = m3.Minute - 60;
        }


        while(m3.Second>=60)
        {
            m3.Minute++;
            m3.Second = m3.Second - 60;
        }


        cout<<"Hour := "<<m3.Hour<<endl;
        cout<<"Minute := "<<m3.Minute<<endl;
        cout<<"Second := "<<m3.Second<<endl;
    }
};
int main()
{
    Math m1,m2,m3;


    m1.setdata();
    // m1.getdata();
    m2.setdata();
    // m2.getdata();
    m3.result(m1 , m2);
}