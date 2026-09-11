#include <iostream>
int main () {

    //if statements = do something if conditions are true
    //                if not then don't do it

    int age;

    std::cout << "Enter your age : ";

    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "Welcome to the site!";
    }

    else if (age < 0){
            std::cout << "You haven't been born yet!";
    }

    else if (age == 0){
        std::cout << "You're being born!";
    }

    else{
        std::cout << "You're not old enough!";
    }

    return 0;
    
}
//if statements order matters, the statement I want to be followed first shall be the one on top