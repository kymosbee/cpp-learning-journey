#include <iostream>
using namespace std;
int main ()
{
    //array is a data structure that can hold multiple values, which are accessed by index number
    string cars[4]; 
    cars[0] = "Corvette"; 
    cars[1] = "Mustang"; 
    cars[2] = "Camry";
    cout << cars[0] << '\n';
    cout << cars[1] << '\n';
    cout << cars[2] << '\n';
    return 0;
}