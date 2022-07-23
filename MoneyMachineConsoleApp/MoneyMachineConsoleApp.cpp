// MoneyMachineConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
double currentBalance = 0.0;
double GetBalance();
void PerformTransaction();
void ExcuteTransaction(int& transcationT, double& amount);
void DisplayInstruction();
double DepositeMoney(double& depositeAmount);
double WithDrawalAmount(double& withDrawAmount);
int transactionType = 0;
//0: is check balance or default
//1: is withdraw
//2: is deposit

bool CheckCanPerformTransaction(int& transactionT, double amount = 0.0) {
	transactionType = transactionT;
	switch (transactionType)
	{
	case 1:
		if (GetBalance() < amount) return false;
	default:
		return true;
	}
}
int main()
{
	do
	{
		PerformTransaction();
	} while (transactionType != 3);


}

void PerformTransaction()
{
	DisplayInstruction();
	int transcationT;
	cin >> transcationT;
	transactionType = transcationT;
	system("cls");
	if (transcationT != 3) {
		cout << "Now enter the amount if no amount is specified this will default to 0" << endl;
		double amount;
		cin >> amount;
		cout << "Performing your transaction please wait" << endl;
		ExcuteTransaction(transcationT, amount);
	}

}

void ExcuteTransaction(int& transcationT, double& amount)
{
	if (CheckCanPerformTransaction(transcationT, amount)) {

		switch (transactionType)
		{
		case 1:
			cout << "Your request for a withdrawal of " << to_string(amount) << " is successful. Your new balance is " << WithDrawalAmount(amount) << endl;
			break;
		case 2:
			cout << "Your request for deposit of " << to_string(amount) << " is successful. Your new balance is " << DepositeMoney(amount) << endl;
			break;
		default:
			cout << "Your balance is " << GetBalance() << endl;
		}
	}
	else {
		cout << "You do not have sufficient fund to perform this transaction !!!. Kindly deposit some money" << endl;
	}
}

void DisplayInstruction()
{
	std::cout << "Hello, Welcome to activision Money bank Machine!\n" << endl;
	cout << "To perform the the following transactions please use the command listed below" << endl;
	cout << "Press 0 to check balance or default" << endl;
	cout << "Press 1 to s withdraw" << endl;
	cout << "Press 2 to s is deposit" << endl;
	cout << "Now press either 0, 1, 2,3" << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

double GetBalance()
{
	return currentBalance;
}

double DepositeMoney(double& depositeAmount)
{
	currentBalance = currentBalance + depositeAmount;
	return GetBalance();
}

double WithDrawalAmount(double& withDrawAmount)
{
	currentBalance = currentBalance - withDrawAmount;
	return GetBalance();
}

