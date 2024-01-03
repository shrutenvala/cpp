
//WAP to find all even elements from a given 1D array.

#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int a[100];

    cout<<"Enter the total size of the array :=";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cout<<"Even elements in the array is :="<<a[i]<<endl;
        }
    }
      
}