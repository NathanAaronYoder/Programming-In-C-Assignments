/*
This program checks if an 8-digit credit card is valid if the check digit (last digit) is correct.
*/

#include <iostream>
using namespace std;
int main() {
	int creditCardNumber;
	int digit;
	int firstSum = 0;
	int secondSum = 0;
	int secondDigit;
	cout << "What is the credit card number: ";
	cin >> creditCardNumber;
	int checkDigit = creditCardNumber % 10;
	for(int i = 0; creditCardNumber > 0; i++)
	{
		digit = creditCardNumber % 10;
		creditCardNumber /= 10;
		if(i % 2 == 0)
		{
			firstSum += digit;
		}
		else
		{
			digit *= 2;
			while(digit > 0)
			{
				secondDigit = digit % 10;
				secondSum += secondDigit;
				digit /= 10;
			}
		}
	}
	int sum = firstSum + secondSum;
	int correctCheckDigit; 
	if(sum % 10 == 0)
	{
		cout << "The number is valid.";
	}
	else
	{
		correctCheckDigit = (10 - (sum % 10) + checkDigit) % 10;
		cout << "The number is not valid. The correct check digit is " << correctCheckDigit;
	}

	return 0;
}
