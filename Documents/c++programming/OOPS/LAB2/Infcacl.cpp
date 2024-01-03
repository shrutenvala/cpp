
// WAP to create a basic calculator with +, -, *, /and % operations using switch case and Class. 
// Add never ending functionality using a loop.

#include<iostream>
using namespace std;
class Calculator
{
    public:
    int no1,no2;
void add()
    {
        int add;
        cout<<"Enter The No1 :";
        cin>>no1;
        cout<<"Enter The No2 :";
        cin>>no2;
        add=no1+no2;
        cout<<"Addition Is :"<<add<<endl;
    }
void sub()
    {
        int sub;
        cout<<"Enter The No1 :";
        cin>>no1;
        cout<<"Enter The No2 :";
        cin>>no2;
        sub=no1-no2;
        cout<<"Substraction Is :"<<sub<<endl;
    }
void mul()
    {
        int mul;
        cout<<"Enter The No1 :";
        cin>>no1;
        cout<<"Enter The No2 :";
        cin>>no2;
        mul=no1*no2;
        cout<<"Multiplication Is :"<<mul<<endl;
    }
void div()
    {
        int div;
        cout<<"Enter The No1 :";
        cin>>no1;
        cout<<"Enter The No2 :";

        cin>>no2;
        div=no1/no2;
        cout<<"Division Is :"<<div<<endl;
    }
void mod()
    {
        int mod;
        cout<<"Enter The No1 :";
        cin>>no1;
        cout<<"Enter The No2 :";
        cin>>no2;
        mod=no1%no2;
        cout<<"Modul Is :"<<mod<<endl;
    }
};
int main()
    {
        Calculator c1;
        int a;
        do{
            cout<<"Press 1 For Addition..!!"<<endl;
            cout<<"Press 2 For Substraction..!!"<<endl;
            cout<<"Press 3 For Multiplication..!!"<<endl;
            cout<<"Press 4 For Division..!!"<<endl;
            cout<<"Press 5 For Modul..!!"<<endl;
            cout<<"Press 0 For Exit..!!"<<endl;
            cin>>a;
            switch(a)
        {
            case 1:
            c1.add();
            break;
            case 2:
            c1.sub();
            break;
            case 3:
            c1.mul();
            break;
            case 4:

            c1.div();
            break;
            case 5:
            c1.mod();
            break;
            case 0:
            cout<<"Exit successfully..!!";
            break;
        }
    }while(a!=0);
}