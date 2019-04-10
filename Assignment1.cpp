/*
This program calculates how many miles you would have to run
to burn off the amount of burritos, salads, and shakes the 
user ate.
*/

#include<iostream>
using namespace std;
int main()
{
  //Define constants
	int const burritosCalories = 357;
	int const saladCalories = 185;
	int const shakeCalories = 388;
	float const caloriesBurntPerMile = 100.0;
  
  //Initialize variables
	int numberOfBurritos;
	int numberOfSalads;
	int numberOfShakes;
  
  //Get User Input
	cout << "How many bean burritos did you consume?";
	cin >> numberOfBurritos;
	cout << "How many bowls of salad did you consume?";
	cin >> numberOfSalads;
	cout << "How many milk shakes did you consume?";
	cin >>  numberOfShakes;
  
  //Calculate the total amount of calories ingested
	int totalBurritosCalories = burritosCalories * numberOfBurritos;
	int totalSaladCalories = saladCalories * numberOfSalads;
	int totalShakeCalories = shakeCalories * numberOfShakes;
	int totalCaloriesIngested = totalBurritosCalories + totalSaladCalories + totalShakeCalories;
  
  /*
  Display amount of calories ingested and determine how many miles the user would have to run in order to burn off
  all of the calories.
  */
	cout << "You have ingested " << totalCaloriesIngested << " calories" << endl;
	float milesToRun = totalCaloriesIngested / caloriesBurntPerMile;
	cout << "You will have to run "<< milesToRun << " miles to expend that much energy.";
	return 0;
}
