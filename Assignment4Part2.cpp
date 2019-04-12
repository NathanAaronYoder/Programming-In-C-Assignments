/*
This program displays the factors of an integer.
*/

#include<iostream>
using namespace std;

int main()
{

	int number;
	int tempNumber = 1;
	cout << "Enter the number to determine its factors: ";

	cin >> number;

	cout << "The factors of " << number << " are: " << endl;
	while (tempNumber <= number / tempNumber)
	{
		if (not(number % tempNumber))
		{
			int factor = number / tempNumber;
			cout << "(" << tempNumber << "," << factor << ")" << endl;
		}

		tempNumber++;
	}

	cout << endl;
	return 0;

}
