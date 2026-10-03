#include <iostream>
using namespace std;
int main ()
{
    int num;
    int guess;
    int tries = 0;
    srand (time (0));
    num = rand() % 100 + 1;
    cout << "******************Number Guessing Game******************\n";
    do
    {
        cout << "Enter a number between (1-100): ";
        cin >> guess;
        tries++;
        if (guess > num)
        {
            cout << "Lower \n";
        }else if (guess < num){
            cout << "Higher\n";
        }else{
            cout << "Congrats you guessed the correct number in : " << tries;
        }
    } while (guess != num);
    
}