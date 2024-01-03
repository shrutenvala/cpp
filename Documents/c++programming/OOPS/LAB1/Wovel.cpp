
// WAP to check if a given character is vowel or consonant.

#include<iostream>
using namespace std;
int main()
{
    char ch;

    cout<<"Enter the any character :=";
    cin>>ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                cout<<"is a vowel";
            }
            
    else
            {
                cout<<"is a consonant";
            }
            
}