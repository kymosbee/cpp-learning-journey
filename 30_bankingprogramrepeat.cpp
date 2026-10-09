#include <iostream>
#include <iomanip>
using namespace std;
void showBalance(double balance);
double withdraw(double balance);
double deposit();

int main()
{
    int choice;
    double balance = 0;
    double amount;
    do
    {
        cout << "********************\n";
        cout << "Enter your choice : \n";
        cout << "1. Show Balance \n";
        cout << "2. Deposit \n";
        cout << "3. Withdraw \n";
        cout << "4. Exit \n";
        
        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input!\n";
            continue;
        }

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break; 
            
        case 3: 
            balance -= withdraw(balance);
            cout << "Your balance is : " << balance << "$\n";
            break; 
        case 4:
            cout <<"Thanks for visiting";
        default:
            break;
        }


    } while (choice != 4);
    
}
void showBalance(double balance)
{
    cout << "Your balance is : $" << balance << '\n';
}

double deposit()
{
    double amount = 0;
    cout << "Enter amount to deposit : ";
    cin >> amount;
    if (amount < 0)
    {
        cout << "That is an invalid amount\n";
        return 0;
    }
    return amount;
}

double withdraw(double balance)
{
    double amount = 0;
    cout << "Enter amount to withdraw : ";
    cin >> amount;
    if (amount < 0 || amount > balance)
    {
        cout << "That is an invalid amount\n";
        return 0;
    }
    return amount;
}



