#include <iostream>
int main (){

  std :: string name;
  int age = 20;
  std :: cout << "Enter your name : ";
  std :: cin >> name;
  std :: cout << "Enter your age : ";
  std :: cin >> age;
  std :: cout << "Hello " << name << '\n' << "You are " << age << " Years old!";

  return 0;
}