#include <iostream>

using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount()
    {
        balance = 0.0;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully.\n";
        }
        else
        {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid withdrawal amount.\n";
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance.\n";
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
    }

    void checkBalance() const
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;
    int choice = 0;
    double amount = 0.0;

    do
    {
        cout << "\n===== Bank Account Management System =====\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice))
        {
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        switch (choice)
        {
        case 1:
            cout << "Enter deposit amount: ";
            cin >> amount;
            account.deposit(amount);
            break;

        case 2:
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            account.withdraw(amount);
            break;

        case 3:
            account.checkBalance();
            break;

        case 4:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}