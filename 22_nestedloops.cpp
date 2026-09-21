#include <iostream>
using namespace std;
int main ()
{
    int rows;
    int columns;
    char symbol;
    cout << "Enter # of rows : ";
    cin >> rows;
    cout << "Enter # of columns : ";
    cin >> columns;
    cout << "Enter symbol : ";
    cin >> symbol;
    for ( int i = 1; i <= rows; i++)
    {
    for ( int j = 1; j <= columns; j++)
    {
        std::cout << symbol << ' ';
    }
    std::cout << '\n';
    }

    return 0;
}