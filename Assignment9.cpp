/*
This program sorts test scores in ascending order and outputs their average.
*/

#include<iostream>
#include<iomanip>
using namespace std;

void getValues(double*, int);
void sort(double*, int);
double findAverage(double*, int);
void displayScores(double*, int, double);

/*
This function gets the scores from the user.
*/
void getValues(double* scores, int numScores){
	double score;
	for(int i = 0; i < numScores; i++){
		cout << "Enter test score " << i + 1 << ": " << endl;
		cin >> score;
		*(scores + i) = score;
	}
}

/*
This function performs a selection sort on the array pointed to by the score 
parameter into ascending order.
*/
void sort(double* scores, int size){
	int min;
	double temp;
	for (int i = 0; i < size; i++) 
    { 
        // Find the minimum element in unsorted array 
        min = i; 
        for (int j = i + 1; j < size; j++){
        	if (*(scores + j) < *(scores + min)){
        		min = j;
          	}
        }  
  
        // Swap the found minimum element with the first element 
        temp = *(scores + min); 
    	*(scores + min) = *(scores + i); 
    	*(scores + i) = temp;
    } 
}

/*
This function calculates and returns the average of the values stored in the array.
*/
double findAverage(double* scores, int numScores){
	double sum = 0.0;
	for (int i = 0; i < numScores; i++){
		sum += *(scores + i);
	}
	double average = sum / numScores;
	return average;
}

/*
This function displays the elements in the array and their average. 
*/
void displayScores(double* scores, int numScores, double average){
	cout << "The test scores in ascending order, and their average, are:" << endl;
	cout << endl;
	cout << "Score" << endl;
	cout << "-----" << endl;
	for (int i = 0; i < numScores; i++){
		cout << setprecision(2) << fixed << *(scores + i) << endl;
	}
	cout << "Average score: " << average << endl;
}

int main(){
    int numScores;
    double average;
    double* scores = NULL;
    cout << "How many test scores will you enter? " << endl;
    cin >> numScores;
    while(numScores != 0){
        scores = new double[numScores];
		getValues(scores, numScores);
		sort(scores, numScores);
		average = findAverage(scores, numScores);
		displayScores(scores, numScores, average);
		cout << "How many test scores will you enter? " << endl;
    	cin >> numScores;
    }
    return 0;
}
