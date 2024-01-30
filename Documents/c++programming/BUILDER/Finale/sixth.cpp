//Define a class `MathOperations` with a method that performs a division operation. Implement exception handling to handle invalid inputs. Create an object of the `MathOperations` class and demonstrate exception handling for invalid inputs.

#include <iostream>
using namespace std;

class MathOperations 
{
public:

    void performDivision(int nume, int deno) 
    {
        try 
        {
            if (deno == 0) 
            {
                throw "You are dumb you don't know how to use division,, Here zero is not allowed";
            }

            double result = (nume) / deno;

            cout << "Result of division: " << result << endl;
        } catch (const char* errorMessage) 
        {
            cerr << "Error: " << errorMessage << endl;
        }
    }
};

int main() 
{
   
    MathOperations mathOperations;

    cout << "Case 1: ";
    mathOperations.performDivision(10, 2);

    cout << "Case 2: ";
    mathOperations.performDivision(8, 0); 

    cout << "Case 3: ";
    mathOperations.performDivision(15, 3);

}
