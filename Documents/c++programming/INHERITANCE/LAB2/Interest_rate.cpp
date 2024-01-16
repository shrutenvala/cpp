

// 1. WAP to print rate of interests of different banks using
// hierarchical inheritance:
// - Class RBI -> Class SBI
// - Class RBI -> Class BOB
// - Class RBI -> Class ICICI
// - inherit rate attribute and getROI() method in all child
// classes
#include<iostream>
using namespace std;
class RBI
{
    public :

    int interest;
    
    void setdata()
    {
        cout<<"Enter the interest rate :="<<endl;
        cin>>interest;
    }
};
class SBI : public RBI
{
    public :

    void getdata()
    {
        cout<<"SBI interest rate is :="<<interest<<endl;
    }
};
class BOB : public RBI
{
    public :

    void getdata()
    {
        cout<<"BOB interest rate :="<<interest<<endl;
    }
};
class ICICI : public RBI
{
    public :

    void getdata()
    {
        cout<<"ICICI interest rate is :="<<interest<<endl;
    }
};
int main()
{
    SBI s1;
    
    s1.setdata();
    s1.getdata();

    BOB b1;

    b1.setdata();
    b1.getdata();

    ICICI i1;

    i1.setdata();
    i1.getdata();
}
