#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)
int main() {
    std::string name;
    int age;

    
    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter your full name: ";

    //std::cin >> name;

    std::getline(std::cin >> std :: ws, name); // Use getline to read full name with spaces
    //the std::ws manipulator is used to consume any leading whitespace characters before reading the name.


    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

    return 0;
}