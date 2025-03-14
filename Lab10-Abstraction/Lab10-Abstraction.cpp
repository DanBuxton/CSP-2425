#include <iostream>
#include <string>

using namespace std;

void task1();

int main()
{
	task1();
}

class BankAccount
{
	double balance;
public:
	BankAccount() { balance = 0; }
	void deposit(double amount) { balance += amount; }
	void withdraw(double amount) { if (balance >= amount) balance -= amount; }
	void showBalance() { cout << "Balance: " << balance << endl; }
};
void task1()
{
	BankAccount account;
	account.deposit(1000);
	account.withdraw(500);
	account.showBalance();
	account.withdraw(501);
	account.showBalance();
}