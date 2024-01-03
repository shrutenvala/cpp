

//WAP to check given string is numeric or not.

#include<iostream>
using namespace std;
int main()
{
    int i,n,count=0;
    char a[100];

    cout<<"Enter the string :=";
    cin>>a;
    


    for(i=0;a[i]!='\0';i++)
    {
        if (a[i]>=48 && a[i]<=57)
        {
            count=1;
        }
    }
    if(count==0)
    {
        cout<<"The given string is not numeric";
    }
    else
    {
        cout<<"The given string is numeric";
    }

}