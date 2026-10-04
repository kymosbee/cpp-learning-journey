#include <iostream>
using namespace std;
void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);
int main ()
{
    bakePizza();
    bakePizza("Pepperoni");
    bakePizza("Chicken", "Pinenapple");
}
void bakePizza()
{
    cout << "Here is your Pizza!\n";

}
void bakePizza(string topping1)
{
    cout << "And here is your " << topping1 << " Pizza!\n";
}
void bakePizza(string topping1, string topping2)
{
    cout << "As well as your " << topping1 << " and "<< topping2<< " Pizza!\n";
}
// In conclusion functions can have same name as long as the parameters are different