// Assignment1_Zach_Krigelman.cpp : Create a transaction log
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	// Declaring variables and initializing
	float balance = 0;
	float check[10] = { 0 };
	float deposit[10] = { 0 };
	float withdraw[10] = { 0 };
	float checkTotal = 0;
	float depositTotal = 0;
	float withdrawTotal = 0;
	char userInput = 'a';
	int checkNum = 0;
	int depositNum = 0;
	int withdrawNum = 0;

	// Prompt user for the beginning balance
	cout << "Please enter the beginning balance: ";
	cin >> balance;
	cout << endl;

	// User enters transaction logging
	while (userInput != 'q' && userInput != 'Q')
	{
		cout << "Would you like to record a transaction?" << endl;
		cout << "(W)ithdraw, (C)heck, (D)eposit, (Q)uit" << endl;
		// Accepts user input for transaction type
		cin >> userInput;
		if (userInput == 'w' || userInput == 'W')
		{
			cout << "Enter amount:" << endl;
			cin >> withdraw[withdrawNum];
			// Sum total withdraws and input into withdraw array
			withdrawTotal += withdraw[withdrawNum++];
		}
		else if (userInput == 'd' || userInput == 'D')
		{
			cout << "Enter amount:" << endl;
			cin >> deposit[depositNum];
			// Sum total deposits and input into deposit array
			depositTotal += deposit[depositNum++];
		}
		else if (userInput == 'c' || userInput == 'C')
		{
			cout << "Enter amount:" << endl;
			cin >> check[checkNum];
			// Sum total checks and input into check array
			checkTotal += check[checkNum++];
		}
		else if (userInput == 'q' || userInput == 'Q')
			cout << "Transaction list complete" << endl;
		// Allows user to exit transaction logging
		else
			cout << "Invalid entry, try again" << endl;
	}
	// Sets formatting to USD
	cout << fixed << setprecision(2);
	for (int withdrawNum = 0; withdrawNum < 9 && withdraw[withdrawNum] != 0; withdrawNum++)
	{
		// Displays list of withdraws
		cout << "\nWithdraw: " << setw(20) << withdraw[withdrawNum] << endl;
	}
	for (int depositNum = 0; depositNum < 9 && deposit[depositNum] != 0; depositNum++)
	{
		// Displays list of deposits
		cout << "Deposit: " << setw(21) << deposit[depositNum] << endl;
	}
	for (int checkNum = 0; checkNum < 9 && check[checkNum] != 0; checkNum++)
	{
		// Displays list of checks
		cout << "Check: " << setw(23) << check[checkNum] << endl;
	}
	// Outputs formatted data
	cout << "------------------------------" << endl;
	cout << "Initial balance is: " << setw(10) << balance << endl;
	cout << "Total deposits: " << setw(14) << depositTotal << endl;
	cout << "Total checks: " << setw(16) << checkTotal << endl;
	cout << "Total withdraws: " << setw(13) << withdrawTotal << endl;
	// Calculates final balance from beginning balance and transaction log
	cout << "Ending balance: " << setw(14) << balance + depositTotal - checkTotal - withdrawTotal << endl;
    return 0;
}

