/*
This program computes a bank's service fees for a month based on a balance and number of checks written.
The bank charges $10 per month plus check fees and an extra $15.00 if the balance falls below $400.
*/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	//Define all variables.
	float beginningBalance;
	cout << "What is the beginning balance? ";
	cin>> beginningBalance;
	int numberChecksWritten;
	cout << "How many checks were written? ";
	cin>> numberChecksWritten;

	//Determine the bank fee based on the user input.
	float bankFee = 10.0;
	if (numberChecksWritten < 20){
		bankFee += numberChecksWritten * 0.10;
	}
	else if (numberChecksWritten < 40){
		bankFee += numberChecksWritten * 0.08;
	}
	else if (numberChecksWritten < 60){
		bankFee += numberChecksWritten * 0.06;
	}
	else {
		bankFee += numberChecksWritten * 0.04;
	}
	if (beginningBalance - bankFee < 400){
		bankFee += 15.0;
	}

	//Output all of the data.
	cout << "Beginning balance: $" << fixed << setprecision(2) << beginningBalance << endl;
	cout << "Number of checks written: "<< numberChecksWritten << endl;
	cout << endl;
	if (beginningBalance < 0){
		cout << "Your account is overdrawn!" << endl;
	}
	if (numberChecksWritten < 0){
		cout << "Number of checks must be zero or more." << endl;
	}
	else{
		cout << "The bank fee this month is $"<< bankFee;
	}

	return 0;
}
