
// WAP to create a class to read and add two times.


#include<iostream>
using namespace std;
class Math
{
    public:


    int f,i;


    void setdata()
    {
        cout<<"Enter the value of the feet :="<<endl;
        cin>>f;


        cout<<"Enter the value of the inch :="<<endl;
        cin>>i;
    }


    void getdata()
    {
        cout<<"Feet :="<<f<<endl;
        cout<<"Inch :="<<i;
    }


    void result(Math m1 , Math m2)
    {
        Math m3;


        m3.f = m1.f + m2.f;
        m3.i = m1.i + m2.i;


        while(m3.i>=12)
        {
            m3.f++;
            m3.i = m3.i - 12;
        }


        cout<<"Feet := "<<m3.f<<endl;
        cout<<"Inch := "<<m3.i<<endl;


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





