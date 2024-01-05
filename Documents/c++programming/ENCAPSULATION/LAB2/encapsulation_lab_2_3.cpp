
// WAP to get and display N numbers of Hotels and static
// information using encapsulation with array of objects
// member by including below mentioned attributes:


#include<iostream>
using namespace std;
class hotel
{
    private:

     static int hotel_id,hotel_staff_quantity,hotel_room_quantity,hotel_establish_year;
     static char hotel_name[100],hotel_type[100],hotel_rating[100],hotel_location[100];

    public:

     void setdata()
    {
        cout<<"Enter the hotel ID :=";
        cin>>hotel_id;

        cout<<"Enter the hotel name :=";
        cin>>hotel_name;

        cout<<"Enter the hotel type (hotel or motel):=";
        cin>>hotel_type;

        cout<<"Enter the hotel location :=";
        cin>>hotel_location;

        cout<<"Enter the hotel rating :=";
        cin>>hotel_rating;

        cout<<"Enter the hotel room quantity :=";
        cin>>hotel_room_quantity;

        cout<<"Enter the hotel staff quantity :=";
        cin>>hotel_staff_quantity;

        cout<<"Enter the hotel establish year :=";
        cin>>hotel_establish_year;
    }

    void getdata()
    {
        cout<<hotel_id<<"\t"<<hotel_name<<"\t"<<hotel_type<<"\t"<<hotel_location<<"\t"<<hotel_rating<<"\t"<<hotel_staff_quantity<<"\t"<<hotel_room_quantity<<"\t"<<hotel_establish_year<<endl;
    }
    
};
int hotel :: hotel_id;
int hotel :: hotel_staff_quantity;
int hotel :: hotel_room_quantity;
int hotel :: hotel_establish_year;
char hotel :: hotel_name[100];
char hotel :: hotel_type[100];
char hotel :: hotel_rating[100];
char hotel :: hotel_location[100];

int main()
{

    hotel h[100];
    int n,i;

    cout<<"Enter the size of hotel data :=";
    cin>>n;

    for(i=0;i<n;i++)
    {
        h[i].setdata();
    }
    for(i=0;i<n;i++)
    {
        h[i].getdata();
    }
}