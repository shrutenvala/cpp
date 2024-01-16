
// 2. WAP to convert given degree celsius temperature into
// fahrenheit and convert that fahrenheit temperature
// into kelvin by implementing multilevel inheritance:
// Class P -> Class Q -> Class R
// - Class P has following members: temperature
// attribute in float
// - Class Q has following members: toFehrenheit()
// method
// - Class R has following members: toKelvin() method

#include<iostream>
using namespace std;
class P 
{
    public:
    
    int temperature;

    void settemp()
    {
        cout<<"Enter the temprature in celcius :=";
        cin>>temperature;
    }
};
class Q : public P  
{
    public:

    int fahrenheit;

    void toFehrenheit()
    {
        cout<<"Celcius in farenhit :="<<temperature*1.8+32<<endl;
    }
};
class R : public Q 
{
    public:

    int kelvin;

    void toKelvin()
    {
        cout<<"Fehrenheit in Kelvin is :="<<temperature+273.15<<endl;
    }
};
int main()
{
    R r1;
    r1.settemp();
    r1.toFehrenheit();
    r1.toKelvin();
}