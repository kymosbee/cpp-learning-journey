#include <iostream>
using namespace std;
int main ()
{
    //the sizeof operator is useful for array iteration

    int age = 20;
    char grade = 'A';
    string name[] = {"Mosbee", "Kyle", "James"};
    bool student = true;
    double gpa = 3.0;
    int dates[] = {10, 19, 1};

    cout << sizeof(name) << " Bytes";

}