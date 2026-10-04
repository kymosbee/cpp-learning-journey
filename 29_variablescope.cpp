#include <iostream>
using namespace std;

int num1 = 4;
void printnum(int num2 = 6)
{
    cout << "Your number is : " << num2;
}


int main ()
{
    printnum(num1);
    // local variables = are declared inside a function or block {}
    // Global variables = are declared outside of all functions
}