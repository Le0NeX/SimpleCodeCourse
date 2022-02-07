#include "Array.h"

int nGenerateNumberRandom()
{
	srand(time(NULL));
	return rand() % 20;
}
void vOneDimensionalArray()
{
	const int ODA_SIZE = 10;
	int nOneDimensionalArray[ODA_SIZE] = { 0 };

	nOneDimensionalArray[0] = 5;
	nOneDimensionalArray[1] = 10;
	nOneDimensionalArray[2] = 15;
	nOneDimensionalArray[3] = 20;
	vFillingOneDimensionalArray(nOneDimensionalArray, ODA_SIZE);
}

void vFillingOneDimensionalArray(int nArray[], const int cnSIZE)
{
	srand(time(0));
	for (int i = 0; i < cnSIZE; i++)
	{
		nArray[i] = rand() % 20;
		cout << nArray[i] << " ";
	}
	cout << endl;
}

void vAddRandomNumberToArray()
{
	srand(time(0));//Auto random number to time
	const int cnARN_SIZE = 10;//Create size a variable
	int nArrayRandomNumber[cnARN_SIZE] = { 0 };//Create array random numbers
	int nCountRandomNumber = 0;

	while (nCountRandomNumber < cnARN_SIZE)
	{
		int nRandomNumber = rand() % 15;
		bool bCTRNresult = bCheckToRandomNumber(nArrayRandomNumber, nRandomNumber, cnARN_SIZE);
		for (;nCountRandomNumber < cnARN_SIZE;)
		{
			if (!bCTRNresult)
			{
				nArrayRandomNumber[nCountRandomNumber] = nRandomNumber;
				nCountRandomNumber++;
				cout << nRandomNumber << " ";
				break;
			}
			else
			{
				break;
			}
		}
	}
}

bool bCheckToRandomNumber(int array[], int NumberToCheck, int array_SIZE)
{
	for (int i = 0; i < array_SIZE; i++)
	{
		if (array[i] == NumberToCheck)
		{
			return true;
			break;
		}
	}
	return false;
}

void vArreyNumberMinimum()
{
	const int nNA_SIZE = 10;
	int nNumberArray[nNA_SIZE] = { 0 };//Craate Array numbers
	srand(time(0));

	for (int i = 0; i < nNA_SIZE; i++)//Add array numbers
	{
		nNumberArray[i] = rand() % 20;//Number random generated
		cout << nNumberArray[i] << " ";
	}

	cout << endl;
	int nBufferNumber = nNumberArray[nNA_SIZE-1];

	for (int i = 0; i < nNA_SIZE; i++)
	{
		if (nNumberArray[i] < nBufferNumber)
		{
			nBufferNumber = nNumberArray[i];
		}
	}
	cout << "Array Number Minimum : " << nBufferNumber << endl;
}

void vTwoDimensionalArray()
{
	const int nTDA_LINE = 10;//Create line variable
	const int nTDA_COLUMN = 10; //Create column variable
	int nTwoDimensionalArray[nTDA_LINE][nTDA_COLUMN] = { 0, 0 };
	srand(time(0));

	for (int i = 0; i < nTDA_LINE; i++)
	{
		for (int j = 0; j < nTDA_COLUMN; j++)
		{
			nTwoDimensionalArray[i][j] = rand() % 20;
			cout << nTwoDimensionalArray[i][j] << " ";
		}
		cout << endl;
	}
}
//void vFunctionValueDefault(int q, int nOneValueDefault = 5, double dTwoValueDefault = 3.0)
//{
//	cout << "nOneValueDegault: " << nOneValueDefault << "\ndTwoValueDefault: " << dTwoValueDefault;
//}