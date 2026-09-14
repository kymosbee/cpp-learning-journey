#include <iostream>
int main (){

    char op;
    double num1;
    double num2;
    double result;

    std:: cout <<"************** CALCULATOR **************\n";
    std:: cout <<"Enter either (+ - * /)\n";
    std:: cin >> op;

    

    switch (op){
        case '+':
        std:: cout <<"Enter #1 number : ";
        std:: cin >> num1;
        std:: cout <<"Enter #2 number : ";
        std:: cin >> num2;
        result = num1 + num2;
        std:: cout << result;
        break;
        case '-':
        std:: cout <<"Enter #1 number : ";
        std:: cin >> num1;
        std:: cout <<"Enter #2 number : ";
        std:: cin >> num2;

        result = num1 - num2;
        std:: cout << result;
        break;
        case '*':
        std:: cout <<"Enter #1 number : ";
        std:: cin >> num1;
        std:: cout <<"Enter #2 number : ";
        std:: cin >> num2;
        result = num1 * num2;
        std:: cout << result;
        break;
        case ('/'):
        std:: cout <<"Enter #1 number : ";
        std:: cin >> num1;
        std:: cout <<"Enter #2 number : ";
        std:: cin >> num2;
        result = num1 / num2;
        std:: cout <<result;
        break;
        default:
        std:: cout <<"That wasn't a valid operator";

        return 0;
    }







}