/*
This program calculates the interest earned given a principal, interest rate, and the times compounded by the user
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	//Define all variables.
	float principal;
	cout << "What is the principal? ";
	cin>> principal;
	float interestRate;
	cout << "What is the interest rate? ";
	cin>> interestRate;
	int timesInterestCompounded;
	cout << "How many times is the interest compounded? ";
	cin>> timesInterestCompounded;

	// The interest rate needs to be converted to decimal form to be used in the formula
	float interestRateDecimal = interestRate / 100;
	
	//Use the formula to find the amount in savings and interest is the amount in savings minus the principle.
	float amountInSavings = principal * pow(1 + (interestRateDecimal / timesInterestCompounded), timesInterestCompounded);
	float interest = amountInSavings - principal;

	//Output all of the data.
	cout << "Interest" << setw(27) << fixed<< setprecision(2) << interestRate << "%"<< endl;
	cout << "Times Compounded:" << setw(18) << timesInterestCompounded << endl;
	cout << "Principal:" << setw(17) << "$ " << setw(8) << fixed << setprecision(2) << principal << endl;
	cout << "Interest:" << setw(18) << "$ " << setw(8) << fixed << setprecision(2) << interest << endl;
	cout << "Amount in Savings:" << setw(9) << "$ " << setw(8) << fixed << setprecision(2) << amountInSavings << endl;

	return 0;
}
