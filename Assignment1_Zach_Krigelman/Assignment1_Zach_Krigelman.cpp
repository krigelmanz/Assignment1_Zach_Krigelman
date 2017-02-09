// Assignment1_Zach_Krigelman.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
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
		cout << "Withdraws: " << withdraw[withdrawNum] << endl;
	}
	for (int depositNum = 0; depositNum < 9 && deposit[depositNum] != 0; depositNum++)
	{
		cout << "Deposit: " << deposit[depositNum] << endl;
	}
	for (int checkNum = 0; checkNum < 9 && check[checkNum] != 0; checkNum++)
	{
		cout << "Check: " << check[checkNum] << endl;
	}
	cout << "Initial balance is: " << balance << endl;
	cout << "Total deposits: " << depositTotal << endl;
	cout << "Total checks: " << checkTotal << endl;
	cout << "Total withdraws: " << withdrawTotal << endl;
	cout << "Ending balance: " << balance + depositTotal - checkTotal - withdrawTotal << endl;
    return 0;
}

