

// WAP to find the factorial of all elements from a given array using a function.

#include<iostream>
using namespace std;
class math
{
    public:
    int a[100];
    int n,i,j;

    void setdata()
    {
        cout<<"Enter the value of the n:=";
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    void fect()
    {
        int f=1;
        for(i=0;i<n;i++)
        {
            f=1;
            for(j=1;j<a[i];j++)
            {
                f=f*j;
            }
            cout<<"fect is "<<a[i]<<" = "<<f<<endl;
        }
    }
};
int main()
{
    math m1;
    m1.setdata();
    m1.fect();
}