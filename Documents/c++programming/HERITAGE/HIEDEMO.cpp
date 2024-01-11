
#include <iostream>
using namespace std;

class PI 
{
public:
    char  name[100];
    int age;

    PI() 
    {
        cout << "Enter name:= ";
        cin >> name;
        cout << "Enter age:= ";
        cin >> age;
    }
};

class JI 
{
public:
    char jobname[100];
    int salary;

    
    JI() 
    {
        cout << "Enter job name:= ";
        cin >> jobname;
        cout << "Enter salary:= ";
        cin >> salary;
    }
};


class Employee : public PI, public JI 
{
public:
  
    Employee() 
    {
        cout << "Enter employee information:=\n";
    }

    void printinfo() 
    {
        cout << "\nEmployee Information:=\n";
        cout << "Name:= " << name << "\n";
        cout << "Age:= " << age << "\n";
        cout << "Job name:= " << jobname << "\n";
        cout << "Salary:= " << salary << "\n";
    }
};

int main() 
{
   
    Employee employee;

    employee.printinfo();

}
