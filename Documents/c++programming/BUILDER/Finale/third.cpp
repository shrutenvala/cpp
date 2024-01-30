 
 //Define a base class `Vehicle` with private attributes `model` and `speed`. Implement public member functions for setting and getting these attributes. Derive two classes, `Car` and `Bike`, from the `Vehicle` class. Implement methods to calculate the time taken for a certain distance based on the speed of each vehicle. Demonstrate abstraction by calling the time calculation methods for both `Car` and `Bike`.

#include<iostream>
using namespace std;
class Vehicle
{
    // private:
    public:

    char model[100];
    double speed;



    void setdata()
    {
        cout<<"Enter your vehicle model :=";
        cin>>model;

        cout<<"Enter your vehicle speed :=";
        cin>>speed;
    }
};

class Car : public Vehicle
{
    public:

    void getdata()
    {
        cout<<"Model :="<<model<<endl;
        cout<<"Speed :="<<speed<<endl;
        cout<<"Your car has taken 30 minutes "<<endl;
    }
};

class bike : public Vehicle
{
    public:
    void getdata()
    {
        cout<<"Model :="<<model<<endl;
        cout<<"Speed :="<<speed<<endl;
        cout<<"Your bike has taken 45 minutes "<<endl;
    }

};


int main()
{
    Car c1;
    c1.setdata();
    c1.getdata();

    bike b1;
    b1.setdata();
    b1.getdata();

}