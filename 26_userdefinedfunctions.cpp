#include <iostream>
using namespace std;

//function = block of reusable code.

void happyBirthday (string declare, int declare2);
int main ()
{
    string use = "Mosbee";
    int use2 = 20;
    happyBirthday (use, use2);
    return 0;
}
void happyBirthday (string define, int declare2 )
{
    cout <<"Happy birthday " << define << '\n';
    cout <<"Happy birthday " << define << '\n';
    cout <<"Happy birthday dear " << define << '\n';
    cout <<"You are " << declare2 <<" Years Old !\n";
}

