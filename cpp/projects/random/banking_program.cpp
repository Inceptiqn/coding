#include <iostream>
#include <iomanip>

void showbalance(double balance);
double deposit();
double withrawal(double balance);

int main()
{

    double balance;
    int choice;
    do
    {
        std::cout << "******************\n";
        std::cout << "Enter your choice:\n";
        std::cout << "******************\n";
        std::cout << "1. Show balance\n";
        std::cout << "2. Deposit money\n";
        std::cout << "3. withdraw money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            showbalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withrawal(balance);
            break;
        case 4:
            std::cout << "Thanks for visiting\n";
            break;
        default:
            std::cout << "Invalid choice\n";
            break;
        }
    } while (choice != 4);

    return 0;
}

void showbalance(double balance)
{
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
        std::cout << "That's not a valid amount\n";
        return 0;
    }
}
double withrawal(double balance)
{
    double amount = 0;
    std::cout << "Enter amount to be withrawn: ";
    std::cin >> amount;
    if (amount > balance)
    {
        std::cout << "Insufficent balance\n";
        return 0;
    }
    else if (amount < 0)
    {
        std::cout << "That's not a valid amount\n";
        return 0;
    }
    else
    {
        return amount;
    }
}