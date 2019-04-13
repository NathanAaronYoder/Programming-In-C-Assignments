/*
This program reads rainfall data by month from a text file and categorizes each piece of data as dry, average, or rainy.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void inputRainfall(int[], int);
int calculateAverageRainFall(int[], int);
void classifyAndDisplayRainfall(int[], int);
void displayHighestAndLowestRainFall(int[], int);

/*
The function reads the monthly rainfall from 
the file rainFall.txt and stores them in the array rainFall
*/
void inputRainfall(int rainFall[], int size)
{
	ifstream inFile;
	int rainFallValue;
	inFile.open("rainfall.txt");
	int i = 0;
	while(inFile >> rainFallValue)
	{
		rainFall[i] = rainFallValue;
		i++;
	}
	inFile.close();
}

/*
Returns the average monthly rainfall
*/
int calculateAverageRainFall(int rainFall[], int size)
{
	int sum = 0;
	for(int i = 0; i < size; i++)
	{
		sum += rainFall[i];
	}
	int average = sum / size;
	return average;
}

/*
Find and display the months with the highest and lowest rainfall.
*/
void displayHighestAndLowestRainFall(int rainFall[], int months)
{
	string month[months] = {
		"January","February","March","April",
		"May","June","July","August",
		"September","October","November","December"
	};
	int lowest = rainFall[0];
	string lowestMonth = month[0];
	int highest = rainFall[0];
	string highestMonth = month[0];
	for (int i = 1; i < months; i++)
	{
		if (rainFall[i] < lowest)
		{
			lowest = rainFall[i];
			lowestMonth = month[i];
		}
		if (rainFall[i] > highest)
		{
			highest = rainFall[i];
			highestMonth = month[i];
		}
	}
	cout << highestMonth << " has the highest rainfall (" << highest << " mm)." << endl;
	cout << lowestMonth << " has the lowest rainfall (" << lowest << " mm)." << endl;
}

/*
Classify and display each month as average, rainy, or dry.
*/
void classifyAndDisplayRainfall(int rainFall[], int months)
{
	int average = calculateAverageRainFall(rainFall, months);
	cout << "The year's average monthly rainfall was " << average << " mm." << endl;
	displayHighestAndLowestRainFall(rainFall, months);
	//Find the highest and lowest average value
	int averageHighest = average + (average * 0.2);
	int averageLowest = average - (average * 0.25);
	//Classify each rainFall value
	for(int i = 0; i < months; i++)
	{
		cout << setw(4) << i << setw(11) << rainFall[i] << setw(17);
		if (rainFall[i] > averageLowest)
		{
			if (rainFall[i] < averageHighest)
			{
				cout << "Average" << endl;
			}
			else
			{
				cout << "Rainy" << endl;
			}
		}
		else
		{
			cout << "Dry" << endl;
		}
	}
}

int main()
{
	int months = 12;
	int rainFall[months];
	inputRainfall(rainFall, months);
	cout << " Month " << " Rainfall(mm) " << " Classification" << endl;
	cout << " ----- " << " ------------ " << " --------------" << endl;
	classifyAndDisplayRainfall(rainFall, months);
	return 0;
}
