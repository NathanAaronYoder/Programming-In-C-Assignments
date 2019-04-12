/*
This program displays the sum of all odd digits of an input.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int number;
	int sum = 0;

	cout << "Please enter a number : ";
	cin >> number;

	while(number > 0)
	{
		int digit = number % 10;
		number /= 10;
		if(digit % 2 != 0)
		{
			sum += digit;
		}
	}

	cout << "The sum of all the odd digits is: " << sum << endl; 
	return 0;
}
