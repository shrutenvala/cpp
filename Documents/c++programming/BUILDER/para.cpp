
//WAP to demonstrate example of parameterized constructor.
#include<iostream>
using namespace std;
class demo
{
    private:

    int a,b;

    public:

    demo(int m,int n)
    {
        a = m ;
        b = n ;
    }
    void getdata()
    {
        cout<<a+b<<endl;
    }
};
int main()
{
    demo d1(20,20);

    d1.getdata();
}
