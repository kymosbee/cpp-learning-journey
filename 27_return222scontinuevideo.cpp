#include <iostream>
using namespace std;
double square (double length);
int main ()
{
    double length = 5.0;
    cout << "The area is : " << square (length) << "cm^2";

}
double square (double length)
{
return length * length;
}