#include <iostream>

int main (){

  // type conversion = conversion a value of one data type to another 
  //        implicit = automatic
  //        explicit = precede value with new data type (int)


  int score = 8;
  int questions = 10;

  std :: cout << "You're score is " << score / (double) questions * 100 << "%";

}