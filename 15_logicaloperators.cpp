#include <iostream>
int main(){

    // && checks if two conditions are true
    // || checks if atleast one is true
    // reverses the logical state of its operand

    int temp;
    bool sunny;
    std::cout <<"Enter the temperature : ";
    std::cin >> temp;
    if(temp <0 || temp > 30){
        std::cout << "The weather is bad!\n";

    }
    else{
        std::cout <<"The weather is good!\n";
    }

    if (!sunny){
        std::cout <<"It is cloudy outside";
    }
    else{
        std::cout <<"It is sunny outside";
    }


}