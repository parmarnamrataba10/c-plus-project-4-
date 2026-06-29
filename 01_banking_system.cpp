
#include <iostream>
using namespace std;

class BankAccount
{
protected:

    int accountNumber;
    string accountHolderName;
    double balance;

public:

    // Constructor
    BankAccount(int accNo, string name, double bal)
    {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }

    // Deposit 
    void deposit(double amount)
    {
        balance = balance + amount;
        cout << "\nAmount Deposited Successfully." << endl;
    }

    // Withdraw 
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "\nAmount Withdrawn Successfully." << endl;
        }
        else
        {
            cout << "\nInsufficient Balance." << endl;
        }
    }

    // Return 
    double getBalance()
    {
        return balance;
    }

    // Virtual Function (Polymorphism)
    virtual void calculateInterest()
    {
        cout << "\nInterest Calculation." << endl;
    }

   
    virtual void displayAccountInfo()
    {
        cout << "----------- Account Details -----------" << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Holder Name    : " << accountHolderName << endl;
        cout << "Balance        : " << balance << endl;
    }

    // Destructor
    virtual ~BankAccount()
    {
    }
};

class SavingsAccount : public BankAccount
{
private:
    double interestRate;

public:

    
    SavingsAccount(int accNo, string name, double bal, double rate)  : BankAccount(accNo, name, bal)
    {
        interestRate = rate;
    }

   
    void calculateInterest() override
    {
        double interest;

        interest = balance * interestRate / 100;
        balance = balance + interest;

        cout << "\nInterest Added : " << interest << endl;
    }

    
    void displayAccountInfo() override
    {
        cout << "\n------ Savings Account ------" << endl;

        cout << "Account Number : " << accountNumber << endl;
        cout << "Holder Name    : " << accountHolderName << endl;
        cout << "Balance        : " << balance << endl;
        cout << "Interest Rate  : " << interestRate << "%" << endl;
    }
};

class CheckingAccount : public BankAccount
{
private:
    double overdraftLimit;

public:

    
    CheckingAccount(int accNo, string name, double bal, double limit)  : BankAccount(accNo, name, bal)
    {
        overdraftLimit = limit;
    }

   
    void checkOverdraft(double amount)
    {
        if (amount <= balance + overdraftLimit)
        {
            balance = balance - amount;
            cout << "\nAmount Withdrawn Successfully." << endl;
        }
        else
        {
            cout << "\nOverdraft Limit Exceeded." << endl;
        }
    }

   
    void displayAccountInfo() override
    {
        cout << "------ Checking Account ------" << endl;

        cout << "Account Number : " << accountNumber << endl;
        cout << "Holder Name    : " << accountHolderName << endl;
        cout << "Balance        : " << balance << endl;
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};

class FixedDepositAccount : public BankAccount
{
private:
    int term;              
    double interestRate;

public:

    
    FixedDepositAccount(int accNo, string name, double bal, int t, double rate): BankAccount(accNo, name, bal)
    {
        term = t;
        interestRate = rate;
    }

    
    void calculateInterest() override
    {
        double interest;

        interest = (balance * interestRate * term) / (100 * 12);

        balance = balance + interest;

        cout << "\nInterest Added : " << interest << endl;
    }

    
    void displayAccountInfo() override
    {
        cout << "------ Fixed Deposit Account ------" << endl;

        cout << "Account Number : " << accountNumber << endl;
        cout << "Holder Name    : " << accountHolderName << endl;
        cout << "Balance        : " << balance << endl;
        cout << "Term           : " << term << " Months" << endl;
        cout << "Interest Rate  : " << interestRate << "%" << endl;
    }
};

int main()
{
    SavingsAccount s1(101, "Rahul", 10000, 5);
    CheckingAccount c1(102, "Priya", 8000, 3000);
    FixedDepositAccount f1(103, "Amit", 50000, 12, 7);

    int choice;
    double amount;

    do
    {
        
        cout << " BANK ACCOUNT SYSTEM";
       

        cout << "\n1. Deposit in Savings Account";
        cout << "\n2. Withdraw from Savings Account";
        cout << "\n3. Calculate Savings Interest";
        cout << "\n4. Display Savings Account";
        cout << "\n5. Withdraw from Checking Account";
        cout << "\n6. Display Checking Account";
        cout << "\n7. Calculate Fixed Deposit Interest";
        cout << "\n8. Display Fixed Deposit Account";
        cout << "\n9. Exit";

        cout << "\n\nEnter Your Choice : ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Amount : ";
            cin >> amount;
            s1.deposit(amount);
        }
        else if (choice == 2)
        {
            cout << "Enter Amount : ";
            cin >> amount;
            s1.withdraw(amount);
        }
        else if (choice == 3)
        {
            s1.calculateInterest();
        }
        else if (choice == 4)
        {
            s1.displayAccountInfo();
        }
        else if (choice == 5)
        {
            cout << "Enter Amount : ";
            cin >> amount;
            c1.checkOverdraft(amount);
        }
        else if (choice == 6)
        {
            c1.displayAccountInfo();
        }
        else if (choice == 7)
        {
            f1.calculateInterest();
        }
        else if (choice == 8)
        {
            f1.displayAccountInfo();
        }
        else if (choice == 9)
        {
            cout << "\nThank You!" << endl;
        }
        else
        {
            cout << "\nInvalid Choice!" << endl;
        }

    } while (choice != 9);

    return 0;
}