
//WAP to find all leap years from 2020 to 3030 and store them in an array
     

#include<iostream>
using namespace std;
int main()
{
    int a[1000];
    int i,n,index=0;

    for(i=2020;i<3030;i++)
    {
        if(i%4==0)
        {
            a[index] = i;
            index++;
        }
    }
    for(i=0;i<index;i++)
    {
        cout<<a[i]<<endl;
    }
}