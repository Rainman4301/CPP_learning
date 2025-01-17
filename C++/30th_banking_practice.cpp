#include <iostream>
#include <iomanip>

void showbalance(double balance);
double deposit();
double withdraw(double balance);
int main()
{

    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "*****************************************************************\n";
        std::cout << "Enter your choice\n";
        std::cout << "*****************************************************************\n";
        std::cout << "1. Show balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        // reset any error flags
        std::cin.clear();

        // this will clear the input buffer
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showbalance(balance);
            break;
        case 2:
            balance = balance + deposit();
            showbalance(balance);
            break;
        case 3:
            balance = balance - withdraw(balance);
            showbalance(balance);
            break;
        case 4:
            std::cout << "Thanks foe visiting!\n";
            break;
        default:
            std::cout << "Invalid choice\n";
            break;
        }
    } while (choice != 4);

    return 0;
}

void showbalance(double balance)
{ // 用來小數點後2位
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit()
{
    double amount = 0;
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;
    if (amount > 0)
    {
        return amount;
    }
    else
    {
        std::cout << "That is not valid amount!! \n";
        return 0;
    }
}
double withdraw(double balance)
{
    double amount = 0;
    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;
    if (amount > balance)
    {
        std::cout << "Insufficient funds\n";
        return 0;
    }
    else if (amount < 0)
    {
        std::cout << "That is not a valid amount\n";
        return 0;
    }
    else
    {
        return amount;
    }
}