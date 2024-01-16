
//1. WAP to find sum of all three number’s cubes by
// implementing single level inheritance: Class X->Class Y
// - Class X has following members: a, b & c attributes in
// integer data type
// - Class Y has following members: setData() and
// getData() methods

#include<iostream>
using namespace std;
class Single
{
    public:

    int a;
    int b;
    int c;
};
class Double : public Single
{
    public:

    void setdata()
    {
        cout<<"Enter the number 1 :=";
        cin>>a;

        cout<<"Enter the number 2 :=";
        cin>>b;

        cout<<"Enter the number 3 :=";
        cin>>c;
    }

    void getdata()
    {
        cout<<"Cube of"<< a <<"is :="<<a*a*a<<endl;

        cout<<"Cube of"<< b <<"is :="<<b*b*b<<endl;

        cout<<"Cube of"<< c <<"is :="<<c*c*c<<endl;

        cout<<"Sum of all three numbers cube is :="<<a*a*a + b*b*b + c*c*c <<endl;
    }
};

int main()
{
    Double D1;

    D1.setdata();
    D1.getdata();
}