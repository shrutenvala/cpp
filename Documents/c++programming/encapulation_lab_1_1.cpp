#include<iostream>
using namespace std;
class info
{
    private:

    int stu_age,stu_id;
    char stu_college[100],stu_city[100],stu_course[100],stu_email[100],stu_name[100];

    public:

    void setdata()
    {
        cout<<" Enter the student ID :=";
        cin>>stu_id;
        cout<<"Enter the student name :=";        
        cin>>stu_name;
        cout<<"Enter the student age :="; 
        cin>>stu_age;       
        cout<<"Enter the student Email :=";
        cin>>stu_email;
        cout<<"Enter the student college :=";
        cin>>stu_college;
        cout<<"Enter the student course :=";       
        cin>>stu_course;
        cout<<"Enter the student city :=";
        cin>>stu_city;
    }

    void getdata()
    {
        cout<<stu_id<<"\t"<<stu_name<<"\t"<<stu_age<<"\t"<<stu_email<<"\t"<<stu_college<<"\t"<<stu_course<<"\t"<<stu_city<<endl;
    }

};
int main()
{
    info e1,e2,e3,e4,e5;

    e1.setdata();
    e2.setdata();
    e3.setdata();
    e4.setdata();
    e5.setdata();

    e1.getdata();
    e2.getdata();
    e3.getdata();
    e4.getdata();
    e5.getdata();


}