
#include <iostream>
using namespace std;

class Animal 
{
public:

    char name[100];
    int age;

    void setdata(char name[], int age) 
    {
        strcpy(this->name,name);
        this->age = age;
    }
};

class Zebra : public Animal 
{
public:

    void display() 
    {
        cout << "Zebra Detail:=" << endl;
        cout << "Name:= " << name << endl;
        cout << "Age:= " << age << " years" << endl;
        cout << "Place of Origin:= Africa" << endl;
    }
};

class Dolphin : public Animal 
{
public:
    void display() 
    {
        cout << "Dolphin Detail:=" << endl;
        cout << "Name:= " << name << endl;
        cout << "Age:= " << age << " years" << endl;
        cout << "Place of Origin:= Ocean" << endl;
    }
};

int main() 
{
    
    Zebra myZebra;
    Dolphin myDolphin;

    myZebra.setdata("Tomy", 5);
    myDolphin.setdata("Sweety", 10);

    myZebra.display();
    cout << endl;
    myDolphin.display();

}