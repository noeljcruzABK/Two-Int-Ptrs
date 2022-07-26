// Write a program that asks the user to enter integers to be stored in the variables 'a' and 'b'.
// Then create two integer pointers named ptrA and ptrB. Assign the values of 'a' and 'b' to ptrA and ptrB, and display them.
// Take an input variable and display the same value by pointer.

#include <iostream>
using namespace std;

void displayPtrs(int a, int b);

int main()
{
	int a;
	int b;

	cout << "Please enter two whole number, interger values:" << endl;
	cin >> a;
	cin >> b;

	displayPtrs(a, b);
}

void displayPtrs(int a, int b)
{
	int* ptrA = new int{ a };
	int* ptrB = new int{ b };

	cout << "You entered: " << *ptrA << " and " << *ptrB << "." << endl;

	delete ptrA;
	ptrA = nullptr;
	delete ptrB;
	ptrB = nullptr;
}