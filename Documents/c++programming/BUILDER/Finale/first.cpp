
// create a class representing a Movie with attributes like title , generation and released year, demostrate the instatiation of objects using array and accessing their class

#include<iostream>
using namespace std;

class Movie
{
    public :

    char title[100];
    char generation[100];
    int releasedYear;

    void setdata()
    {
        cout<<"Enter the Movie title :=";
        cin>>title;

        cout<<"Enter the generation name :=";
        cin>>generation;

        cout<<"Enter the release year :=";
        cin>>releasedYear;
    }

    void getdata()
    {
        cout<< "Movie :=" << title <<endl;
        cout<< "Generation :=" << generation <<endl;
        cout<< "Release year :=" << releasedYear <<endl;
    }


};
int main()
{
    Movie m[100];
    
    int n,i;

    cout<<"Enter the total size of the array :=";
    cin>>n;

    for(i=0;i<n;i++)
    {
        m[i].setdata();
    }
    for(i=0;i<n;i++)
    {
        m[i].getdata();
    }
}