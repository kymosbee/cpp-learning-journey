#include <iostream>
using namespace std;
// return = return the value back to the spot where I called the encompassing function
string concatStrings(string string1, string string2);
int main ()
{
    string firstName = "Mosbee";
    string lastName = "Rkiba";
    cout << "Hello "<< concatStrings(firstName, lastName);
    return 0;

}
string concatStrings(string string1, string string2)
{
    
    return string1 + " " + string2;

}


/*double square (double length);
double cube (double length);
int main ()
{
    double length = 5.0;
    cout << "The area is : " << square (length) << "cm^2\n";
    cout << "The volume is : " << cube (length) << "cm^3\n";
}
double square (double length)
{
return length * length;
}
double cube (double length)
{
return length * length * length;
}
*/