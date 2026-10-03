#include <iostream>
using namespace std;
int main ()
{
    //pseudo random = NOt truly random but close
    
    srand (time(NULL));

    int num1 = ((rand() % 6) + 1);
    int num2 = ((rand() % 6) + 1);
    int num3 = ((rand() % 6) + 1);

    
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num2 << endl;



}