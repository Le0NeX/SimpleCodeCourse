#include "DynamicArray.h"
#include "FileBasic.h"

void vRunDynamicArray()
{
	int nDA_SIZE = 10;//Create size for dynamic array
	int* nDynamicArray = new int[nDA_SIZE];//Create dynamic array
	(* nDynamicArray) = {0};
	vFillTheDynamicArray(&nDynamicArray, nDA_SIZE);
	vCoutDynamicArray(&nDynamicArray, nDA_SIZE);
	delete[] nDynamicArray;
	cout << "Dynamic array: nDynamicArray, dellete." << endl;
}

void vFillTheDynamicArray(int* nArray[], int nArraySize)
{
	for (int i = 0; i < nArraySize; i++)
	{
		int nRandomNumber = rand() % 10;
		(*nArray)[i] = nRandomNumber;
	}
}

void vCoutDynamicArray(int* nArray[], int nArraySize)
{
	cout << "nDynamicArray:\t";
	for (int i = 0; i < nArraySize; i++)
	{
		cout << (* nArray)[i] << " ";
	}
	cout << endl;
}