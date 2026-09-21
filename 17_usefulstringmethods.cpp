#include <iostream>
int main () 
{
    std::string name;
    std::cout << "Enter your name : ";
    std::getline (std:: cin, name);
    if (name.length() > 12 )
    {
        std::cout <<"You're name can't be over 12 characters";
    }
    else if (name.length())
    {
        std::cout <<"Welcome "<< name;
    }
    if (name.empty())
    {
    std::cout << "You didn't enter a name";
    
    }
}