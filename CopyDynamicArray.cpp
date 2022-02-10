#include "CopyDynamicArray.h"
#include "FileBasic.h"

void vRunCopyDynamicArray()
{
	int nDA_SIZE = 10;
	int* nDynamicArray = new int[nDA_SIZE];
	int nCDA_SIZE = 0;
	int* nCopyDynamicArray = new int[nDA_SIZE];
	vFillDynamicArray(nDynamicArray, nDA_SIZE);
	vShowDynamicArray(nDynamicArray, nDA_SIZE);
	vCopyDynamicArray(nDynamicArray, nDA_SIZE, nCopyDynamicArray, &nCDA_SIZE);
	vShowDynamicArray(nCopyDynamicArray, nDA_SIZE);

	delete[] nDynamicArray;
	delete[] nCopyDynamicArray;
}

void vFillDynamicArray(int* const nArray, const int nSize)
{
	for (int i = 0; i < nSize; i++)
	{
		int nRandomNumber = rand() % 20;
		nArray[i] = nRandomNumber;
	}
}

void vCopyDynamicArray(const int* cnArray, const int cnArraySize, int* const ncCopyArray, int* ncCopyArraySize)
{
	for (int i = 0; i < cnArraySize; i++)
	{
		ncCopyArray[i] = cnArray[i];
		(* ncCopyArraySize)++;
	}
}

void vShowDynamicArray(const int* nArray, const int nSize)
{
	for (int i = 0; i < nSize; i++)
	{
		cout << nArray[i] << " ";
	}
	cout << endl;
}