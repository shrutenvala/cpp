
// # WAP to get and display N numbers of Fast Food cafe
// # information using encapsulation and use of default
// # constructor by including below mentioned attributes:
// # - cafe_id
// # - cafe_name
// # - cafe_type (like rooftop or normal)
// # - cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
// # - cafe_location (city name)
// # - cafe_establish_year
// # - cafe_staff_quantity

#include<iostream>
using namespace std;
class cafe
{
    public:

    int cafe_id,cafe_rating,cafe_staff_quantity,cafe_establish_year;
    char cafe_name,cafe_location,cafe_type;

    cafe()
    {
        cout<<"Enter the cafe ID :=";
        cin>>cafe_id;

        cout<<"Enter the cafe name :=";
        cin>>cafe_name;

        cout<<"Enter the cafe type :=";
        cin>>cafe_type;

        cout<<"Enter the cafe location :=";
        cin>>cafe_location;

        cout<<"Enter the cafe rating:=";
        cin>>cafe_rating;

        cout<<"Enter the cafe staff quantity :=";
        cin>>cafe_staff_quantity;

        cout<<"Enter the cafe establish year :=";
        cin>>cafe_establish_year;
    }
    void getdata()
    {
        cout<<cafe_id<<"\t"<<cafe_name<<"\t"<<cafe_type<<"\t"<<cafe_location<<"\t"<<cafe_rating<<"\t"<<cafe_staff_quantity<<"\t"<<cafe_establish_year<<endl;
    }
};
int main()
{
    int i,n;

    cout<<"Enter the cafe data list :=";
    cin>>n;

    cafe c[n];

    for(i=0;i<n;i++)
    {
        c[i].getdata();
    }
}