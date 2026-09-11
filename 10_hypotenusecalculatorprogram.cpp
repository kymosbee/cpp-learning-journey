#include <iostream>

#include <cmath>

int main () {

    double a ;

    double b ;

    std :: cout <<"Welcome to the hypotenuse calculator" << '\n';
    
    std :: cout <<"Enter your first side length : ";

    std :: cin >> a;
    
    std :: cout << "Enter your second side length " ;

    std :: cin >> b;

    std :: cout << "Your hypothenuse length is : " << sqrt (pow (a, 2) + pow (b, 2));

    return 0;

}