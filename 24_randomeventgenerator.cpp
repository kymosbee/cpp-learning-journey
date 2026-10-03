#include <iostream>
using namespace std;
int main ()
{
    srand(time(0));
    int randNum = rand() % 3 + 1;
    switch (randNum)
    {
        case 1 : cout << "You won stickers";
        break;
        case 2 : cout << "You won AirPods";
        break;
        case 3 : cout << "You won a Tesla!";
        break;
    }
}