/*
This program is a math tutor for elementary students.
It asks an addition, subraction, multiplication, or division problem for the student to answer, then
outputs whether the student was correct or incorrect.
*/

#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	bool programRunning = true;
	while(programRunning){
		cout << "Menu" << endl;
		cout << "1. Addition problem" << endl;
		cout << "2. Subtraction problem" << endl;
		cout << "3. Multiplication problem" << endl;
		cout << "4. Division problem" << endl;
		cout << "5. Quit this program" << endl;
		int choice;
		cout << endl;
		cout << "Enter your choice (1-5): ";
		cin >> choice;
		while(choice < 0 || choice > 5)
		{
			cout << "The valid choices are 1,2,3,4, and 5. Please choose: ";
			cin >> choice;
		}
		if(choice == 1)
		{
			int answer;
			int num1 = rand() % 10;
			int num2 = rand() % 10;
			int correctAnswer = num1 + num2;
			cout << num1 << endl;
			cout << "+ " << num2 << endl;
			cout << "---" << endl;
			cin >> answer;
			if (answer == correctAnswer)
			{
				cout << "Congratulations! That's right." << endl;
			}
			else
			{
				cout << "Sorry, the correct answer is " << correctAnswer << endl;
			}
		}
		else if(choice == 2)
		{
			int answer;
			int num1 = rand() % 10;
			int num2 = rand() % 10;
			while(num2 > num1)
			{
				num2 = rand() % 10;
			}
			int correctAnswer = num1 - num2;
			cout << num1 << endl;
			cout << "- " << num2 << endl;
			cout << "---" << endl;
			cin >> answer;
			if (answer == correctAnswer)
			{
				cout << "Congratulations! That's right." << endl;
			}
			else
			{
				cout << "Sorry, the correct answer is " << correctAnswer << endl;
			}

		}
		else if(choice == 3)
		{
			int answer;
			int num1 = rand() % 10;
			int num2 = rand() % 10;
			int correctAnswer = num1 * num2;
			cout << num1 << endl;
			cout << "* " << num2 << endl;
			cout << "---" << endl;
			cin >> answer;
			if (answer == correctAnswer)
			{
				cout << "Congratulations! That's right." << endl;
			}
			else
			{
				cout << "Sorry, the correct answer is " << correctAnswer << endl;
			}
		}
		else if(choice == 4)
		{
			int answer;
			int num2 = rand() % 9 + 1;
			int num1 = num2 * (rand() % 10 + 1);
			int correctAnswer = num1 / num2;
			cout << num1 << " / " << num2 << " = ";
			cin >> answer;
			if (answer == correctAnswer)
			{
				cout << "Congratulations! That's right." << endl;
			}
			else
			{
				cout << "Sorry, the correct answer is " << correctAnswer << endl;
			}
		}
		else if(choice == 5)
		{
			cout << "Thank you for using math tutor!";
			programRunning = false;
		}
	}
	return 0;
}
