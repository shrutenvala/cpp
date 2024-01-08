#include<iostream>
using namespace std;
class Copy
{
    public:

    int a,b;
    
    Copy(Copy &c2)
    {
        c2.a=10;
        c2.b=20;
    }
    void getdata()
    {
        cout<<a+b<<endl;
    }
};
int main()
{
    Copy c1(c1);
    c1.getdata();
}