#include <iostream>
int main (){
    // ternary operator ? = replacement to an if/else statement
    // condition ? expression1 : expression2;

    int number;
//  std::cout <<"Enter your grade (0-100) : ";
//  std::cin >> grade;

/*  if (grade >= 60)
    {
        std::cout <<"Congrats you passed !";
    }
    else{
        std::cout <<"You failed !";
    }
*/
//  grade >= 60 ? std::cout <<"Congrats you passed !" : std::cout <<"You failed !";
//std:: cout <<"Enter a number : ";
//std:: cin >>number; 
//number % 2 ? std::cout <<"That is an odd number" : std::cout <<"That is and even number";

bool hunger = true;
hunger ? std:: cout << "You are hungry" : std::cout << "You are full";

return 0;
}