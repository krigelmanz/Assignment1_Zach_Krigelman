// Assignment1_Zach_Krigelman.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
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
	cout << "Please enter the beginning balance: ";
	cin >> balance;
	cout << endl;
	while (userInput != 'q' && userInput != 'Q')
	{
		cout << "Would you like to record a transaction?" << endl;
		cout << "(W)ithdraw, (C)heck, (D)eposit, (Q)uit" << endl;
		cin >> userInput;
		if (userInput == 'w' || userInput == 'W')
		{
			cout << "Enter amount:" << endl;
			cin >> withdraw[withdrawNum];
			withdrawTotal += withdraw[withdrawNum++];
		}
		else if (userInput == 'd' || userInput == 'D')
		{
			cout << "Enter amount:" << endl;
			cin >> deposit[depositNum];
			depositTotal += deposit[depositNum++];
		}
		else if (userInput == 'c' || userInput == 'C')
		{
			cout << "Enter amount:" << endl;
			cin >> check[checkNum];
			checkTotal += check[checkNum++];
		}
		else if (userInput == 'q' || userInput == 'Q')
			cout << "Transaction list complete" << endl;
		else
			cout << "Invalid entry, try again" << endl;
	}
	for (int withdrawNum = 0; withdrawNum < 9 && withdraw[withdrawNum] != 0; withdrawNum++)
	{
		cout << "\nWithdraw: " << setw(19) << withdraw[withdrawNum] << endl;
	}
	for (int depositNum = 0; depositNum < 9 && deposit[depositNum] != 0; depositNum++)
	{
		cout << "Deposit: " << setw(21) << deposit[depositNum] << endl;
	}
	for (int checkNum = 0; checkNum < 9 && check[checkNum] != 0; checkNum++)
	{
		cout << "Check: " << setw(23) << check[checkNum] << endl;
	}
	cout << "------------------------------" << endl;
	cout << "Initial balance is: " << setw(10) << balance << endl;
	cout << "Total deposits: " << setw(14) << depositTotal << endl;
	cout << "Total checks: " << setw(16) << checkTotal << endl;
	cout << "Total withdraws: " << setw(13) << withdrawTotal << endl;
	cout << "Ending balance: " << setw(14) << balance + depositTotal - checkTotal - withdrawTotal << endl;
    return 0;
}

