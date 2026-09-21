#include <iostream>
using namespace std;
int main () 
{
    int number;
    do 
    {
        cout << "Enter a positive number : ";

        cin >> number;

    } while (number < 0);
    
    cout << "The number you entered is :" << number;
    
}