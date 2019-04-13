/*
This program takes a number and turns it into its English name.
*/

#include <iostream>
using namespace std;
string digitToEnglish(int);
string teenNumberToEnglish(int);
string tensNumberToEnglish(int);
string numberToEnglish(int);

string digitToEnglish(int digit)
{
	switch(digit)
	{
		case 1: return "one";
		case 2: return "two";
		case 3: return "three";
		case 4: return "four";
		case 5: return "five";
		case 6: return "six";
		case 7: return "seven";
		case 8: return "eight";
		case 9: return "nine";
	}
}

string teenNumberToEnglish(int teenNumber){
	switch(teenNumber)
	{
		case 10: return "ten";
		case 11: return "eleven";
		case 12: return "twelve";
		case 13: return "thirteen";
		case 14: return "fourteen";
		case 15: return "fifteen";
		case 16: return "sixteen";
		case 17: return "seventeen";
		case 18: return "eighteen";
		case 19: return "nineteen";
	}
}

string tensNumberToEnglish(int tensNumber){
	int tensDigit = tensNumber / 10;
	switch(tensDigit)
	{
		case 2: return "twenty";
		case 3: return "thirty";
		case 4: return "forty";
		case 5: return "fifty";
		case 6: return "sixty";
		case 7: return "seventy";
		case 8: return "eighty";
		case 9: return "ninety";
	}
}

string numberToEnglish(int number){
	string name;
	if (number > 99)
	{
		int hundredsPlace = number / 100;
		name += digitToEnglish(hundredsPlace) + " hundred ";
		number = number % 100;
	}
	if (number > 9)
	{
		if (number / 10 > 1)
		{
			name += tensNumberToEnglish(number) + " ";
			number = number % 10;
		}
		else
		{
			name += teenNumberToEnglish(number);
			return name;
		}
	}
	if (number > 0)
	{
		name += digitToEnglish(number);
	}
	return name;
}

int main()
{
	int number;
	cout << "Please enter a positive integer less than 1000: ";
	cin >> number;
	string name = numberToEnglish(number);
	cout << name; 
}
