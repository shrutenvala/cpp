
#include <iostream>
using namespace std;


class Number 
{
protected:
    int num;

public:
    void getnumber() 
    {
        cout << "Enter a number:= ";
        cin >> num;
    }
};


class Square : public Number 
{
public:
    void calculatesquare() 
    {
        cout << "Square of " << num << " is:= " << num * num << endl;
    }
};


class Cube : public Number 
{
public:
    void calculatecube() 
    {
        cout << "Cube of " << num << " is:= " << num * num * num << endl;
    }
};


int main() 
{
    Square s1;
    Cube c1;

    s1.getnumber();
    s1.calculatesquare();
    
    c1.getnumber();
    c1.calculatecube();


}
