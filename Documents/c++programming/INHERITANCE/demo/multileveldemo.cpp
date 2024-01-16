
//Multilevel Inheritance

#include<iostream>
using namespace std;
class samsung
{
    public:

    int display;

    void setdisplay()
    {
        cout<<"Enter the total purchase display :=";
        cin>>display;
    }
};
class apple : public samsung
{
    public:
    
    int phone;

    void getdisplay()
    {
        phone = display;
        cout<<"Total display"<<display<<endl;
    }
};
class applestore : public apple
{
    public:

    void totalphone()
    {
        cout<<"Total phone"<<phone<<endl;

    }
};
int main()
{
    applestore a1;
    a1.setdisplay();
    a1.getdisplay();
    a1.totalphone();
}