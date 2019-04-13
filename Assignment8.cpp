/*
This program displays whether or not a 4 x 4 matrix is a magic square.
A magic square is when the sums of the rows, columns, and diagonals are equal to each other.
*/

#include<iostream>
using namespace std;

const int numRows = 4;
const int numCols = 4;

void getMatrixFromUser(int[][numCols], int);
bool isMatrixMagicSquare(int[][numCols], int);

void getMatrixFromUser(int matrix[][numCols], int rows){
	int input;
	for (int row = 0; row < numRows; row++){
		for (int col = 0; col < numCols; col++){
			cout << "Enter a number between 1 and 16: " << endl;
			cin >> input;
			while (!(input >= 0 && input <= 16)){
				cout << "That number was not in between 1 and 16. Try again: " << endl;
				cin >> input;
			}
			matrix[row][col] = input;
		}
	}
}

bool isMatrixMagicSquare(int matrix[][numCols], int rows){
	//Get sum of first row to test other sums with.
	int sum = 0;
	for (int col = 0; col < numCols; col++){
		sum += matrix[0][col];
	}
	cout << "Sum is " << sum << endl;

	//Get sum of each row and test it against previous sum.
	int tempSum = 0;
	for (int row = 1; row < numRows; row++){
		for (int col = 0; col < numCols; col++){
			tempSum += matrix[row][col];
		}
		if (tempSum != sum){
			return false;
		}
		tempSum = 0;
	}

	//Get sum of each column and test it against previous sum.
	for (int col = 0; col < numCols; col++){
		for (int row = 0; row < numRows; row++){
			tempSum += matrix[row][col];
		}
		if (tempSum != sum){
			return false;
		}
		tempSum = 0;
	}

	//Get sum of diagonals and test them against previous sum.
	int tempSum2 = 0;
	for (int row = 0; row < numRows; row++){
		int col = 0; 
		tempSum += matrix[row][col];
		tempSum2 += matrix[(numRows - 1) - row][(numCols - 1) - col];
		col++;
	}
	if (tempSum != sum || tempSum2 != sum){
		return false;
	}
	return true;
}

int main(){
	int matrix[numRows][numCols];
	getMatrixFromUser(matrix, numRows);
	if (isMatrixMagicSquare(matrix, numRows)){
		cout << "The Matrix is a Magic Square.";
	}
	else{
		cout << "The Matrix is not a Magic Square.";
	}
	return 0;
}
