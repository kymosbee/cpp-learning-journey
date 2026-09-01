#include <iostream>

namespace first {

  int x = 0;

}

namespace second {

  int x = 999;

}

int main() {

  using namespace second;


  std :: cout << first :: x;

  //Namespace allows identical named entitites as long as the namespaces are different

  //I could use (using namespace std;) to cut off some typing but it is preferebaly not to

  return 0;
}