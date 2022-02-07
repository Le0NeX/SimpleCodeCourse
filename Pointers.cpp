#include "Pointers.h"
#include "FileBasic.h"

void vPointers()
{
	int Number = 5;
	cout << "Number: \t" << Number << endl;

	int *pNumber = &Number; //Create pointer pNumber a variable Number
	int *pNumberTwo = &Number; //Create second pointer pNumberTwo a variable Number

	cout << "*pNumber:\t" << pNumber << endl;
	cout << "*pNumberTwo:\t" << pNumberTwo << endl;

	*pNumberTwo = 2;//Add variable pNumber new value

	cout << "pNumber:\t" << Number << endl;//Output value: 2
	cout << "*pNumber:\t" << *pNumber << endl;
}

void vPointerOnTheArray()
{
	const int POTA_SIZE = 10;
	int nPointerOnTheArray[POTA_SIZE] = { 2, 1, 340, 12, 345, 3 };

	cout << "vPointerOnTheArray[]:\t";

	for (int i = 0; i < POTA_SIZE; i++)
	{
		cout << nPointerOnTheArray[i] << " ";
	}
	cout << endl;
	int *pnPointerOnTheArray = nPointerOnTheArray;
	cout << "*pnPointerOnTheArray:\t";

	for (int i = 0; i < POTA_SIZE; i++)
	{
		cout << pnPointerOnTheArray[i] << " ";
	}
	cout << endl;

	cout << "nPointerOnTheArray:\t" << nPointerOnTheArray << endl;
	cout << "*pnPointerOnTheArray:\t" << pnPointerOnTheArray << endl;
	cout << "*pnPointerOnTheArray:\t" << pnPointerOnTheArray[+2] << endl;//output two elements array, value: 340
}
void vAddParametrInFunction()
{
	int nNumber = 10;
	cout << "number before to changing:\t" << nNumber << endl;
	vAceptingParametrInFunction(&nNumber);//Sumon function acros ampersant
	cout << "number after to changing:\t" << nNumber << endl;
}

void vAceptingParametrInFunction(int *pnNumber)
{
	(* pnNumber)++;//* Star means operation dereferencing
}

/* Lesson: Several pointer input */
void vServivalPointerOutput()
{
	int nNumberOne = 1000;
	int nNumberTwo = 2000;
	int nNumberThree = 3000;
	cout << "nNumberOne to before:\t" << nNumberOne << endl;
	cout << "nNumberTwo to before:\t" << nNumberTwo << endl;
	cout << "nNumberThree to before:\t" << nNumberThree << endl;
	cout << "=================================================" << endl;
	vSeveralPointerInput(&nNumberOne, &nNumberTwo, &nNumberThree);//Runs a function vServivalPointerInput
	cout << "nNumberOne to after:\t" << nNumberOne << endl;
	cout << "nNumberTwo to after:\t" << nNumberTwo << endl;
	cout << "nNumberThree to after:\t" << nNumberThree << endl;
}


void vSeveralPointerInput(int *pnNumberOne, int *pnNumberTwo, int *pnNumberThree)
{
	(*pnNumberOne) = 555;
	(*pnNumberTwo)++;
	(*pnNumberThree) -= 20;
}

/* Home a lesson: Swap input parametrs */
void vValueToSwap()
{
	int nValueOne = 10;
	int nValueTwo = 20;
	vInputValueToSwap(&nValueOne, &nValueTwo);
	cout << "nValueOne:\t" << nValueOne << endl;
	cout << "nValueTwo:\t" << nValueTwo << endl;
}
void vInputValueToSwap(int *pnValueOne, int *pnValueTwo)
{
	int nOneTemporaryVariable = (*pnValueOne);
	(*pnValueOne) = (*pnValueTwo);
	(*pnValueTwo) = nOneTemporaryVariable;
}
/* Home a lesson: Swap input parametrs */
