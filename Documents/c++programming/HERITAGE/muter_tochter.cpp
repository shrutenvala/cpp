
#include <iostream>
#include <string.h>
using namespace std;


class Mother 
{
public:

    void display()
    {
        cout<<"I am the mother."<<endl;
    }
};

class Daughter : public Mother 
{
public:
    void display() 
    {
        cout<<"I am the daughter."<<endl;
    }
};

int main() 
{
    
    Daughter D1;

    D1.display();

}
