#include <iostream>
int main (){

    std::string name;
    std::cout << "Enter your name : ";
    std::getline(std::cin, name);
    while (name.empty() || name.length()>10 || name.length() == 0)
    {
        std::cout << "Enter your name correctly : ";
        getline(std::cin, name);
       
    }

        std::cout <<"Hello " << name;

    /*infinite loop:
    while (1==1)
    {
        std::cout << "HELP! I'M STUCK !";
    }*/

    return 0;
    
}