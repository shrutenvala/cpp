
//WAP to create a class for student to get and print details of N students.
// (with use of array of objects)

#include<iostream>
using namespace std;

class Student {
private:
    char name[100];
    int age,marks;

public:
    
    void setdata() 
    {
        cout << "Enter student name:= ";
        cin >> name;
        cout << "Enter student age:= ";
        cin >> age;
        cout << "Enter student marks:= ";
        cin >> marks;
    }

    void getdata() 
    {
        cout << "Name:= " << name << endl;
        cout << "Age:= " << age << endl;
        cout << "Marks:= " << marks << endl;
    }
};

int main()
{

    Student s[100];
    int n,i;

    cout<<"Enter total students :=";
    cin>>n;

    for(i=0;i<n;i++)
    {
        s[i].setdata();
    }
    for(i=0;i<n;i++)
    {
        s[i].getdata();
    }
}
