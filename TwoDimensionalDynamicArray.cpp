#include "TwoDimensionalDynamicArray.h"
#include "FileBasic.h"

void vRunTwoDimensionalDynamicArray()
{
	int nTDDA_ROWS = 4;//Count dynamic array
	int nTDDA_COLS = 5;//Length dynamic arrays
	int** nTwoDimensionalDynamicArray = new int* [nTDDA_ROWS];//Create dynamic array a pointer the dynamic arrays
	vEnterCountRowsCols(nTDDA_ROWS, nTDDA_COLS);
	vCreateTwoDimensionalDynamicArray(nTwoDimensionalDynamicArray, nTDDA_ROWS, nTDDA_COLS);
	vCoutTwoDimensionalDynamicArray(nTwoDimensionalDynamicArray, nTDDA_ROWS, nTDDA_COLS);
	vDeleteTwoDimensionalDynamicArray(nTwoDimensionalDynamicArray, nTDDA_ROWS);//Delete dynamic array for clear a memory
}
void vEnterCountRowsCols(int& nRows, int& nCols)
{
	cout<<"Please enter count a rows:\t";
	cin >> nRows;
	cout<<"\nPlease enter count a cols:\t";
	cin >> nCols;
	cin.clear();
}

void vCreateTwoDimensionalDynamicArray(int *nArray[], int nRows, int nCols)
{
	for (int i = 0; i < nRows; i++)
	{
		nArray[i] = new int[nCols];
		for (int j = 0; j < nCols; j++)
		{
			int nRandNumber = rand() % 10;
			nArray[i][j] = nRandNumber;
		}
	}
}

void vCoutTwoDimensionalDynamicArray(int* nArray[], int nRows, int nCols)
{
	for (int i = 0; i < nRows; i++)
	{
		for (int j = 0; j < nCols; j++)
		{
			cout << nArray[i][j] << " ";
		}
		cout << endl;
	}
}

void vDeleteTwoDimensionalDynamicArray(int* nArray[], int nRows)
{
	for (int i = 0; i < nRows; i++)
	{
		delete[] nArray[i];
	}
	delete[] nArray;
}