/*
This program uses object oriented programming to 
create an array based on user input.
*/
#include<iostream>
using namespace std;
class pointerDataClass
{
	int maxSize;
	int length;
	int *p;

	public:

	pointerDataClass(int);
	~pointerDataClass();
	void insertAt(int, int);
	void displayData();
};

//Constructor
pointerDataClass::pointerDataClass(int size){
	maxSize = size;
	length = 0;
	p = new int[maxSize];
}

//Destructor
pointerDataClass::~pointerDataClass(){
	delete []p;
}

//Insert a value into the array at a certain index
void pointerDataClass::insertAt(int index, int num){
	length++;
	*(p + index) = num;
}

//Display the array
void pointerDataClass::displayData(){
	cout << "The array is:" << endl << "[";
	for (int i = 0; i < length - 1; i++){
		cout << *(p + i) << ", ";
	}
	cout << *(p + length - 1)<< "]" << endl;
	
}

int main()
{
	int size;
	int num;
	cout << "How many elements will be in your array?" << endl;
	cin >> size;
	pointerDataClass myList(size);
	cout << "Enter the elements of the array:" << endl;
	for (int i = 0; i < size; i++){
		cin >> num;
		myList.insertAt(i,num);
	}
	myList.displayData();
	return 0;
}