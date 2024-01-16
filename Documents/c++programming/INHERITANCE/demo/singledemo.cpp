
// single inheritance

#include<iostream>
using namespace std;
class samsung
{
    public:

    int display;
};
class apple : public samsung
{
    public:

    void setdisplay()
    {
        cout<<"Enter the toatal number of the display :=";
        cin>>display;

    }
    void getdisplay()
    {
        cout<<"Total display"<<display<<endl;
    }
};

int main()
{
    apple a1;
    a1.setdisplay();
    a1.getdisplay();
}