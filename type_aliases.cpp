#include <iostream>
#include <vector>

//typedef std :: vector <std :: pair <std :: string, int>> pairlist_t;
//typedef std :: string txt_t;
//typedef int number_t;
using txt_t = std :: string;
using number_t = int;

int main () {

  txt_t firstname = "Mosbee";
  number_t age = 21;

  std :: cout << firstname << '\n';
  std :: cout << age << '\n';
  //pairlist_t pairlist ;
  return 0;
}

//Typedef = reserved keyword to rename existing data type, easier to read and type
//May encounter and alternative written as using x = y