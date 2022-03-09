#include "WorkingOfArray.h"
#include "FileBasic.h"

/*
* Change array size 
* Add elemets to array
* Delete elements of array
*/
void RunArray()
{
	int arraySize = 0;
	int* array = new int[arraySize];

	FillArrayElements(array, &arraySize);
	delete[] array;
}

void FillArrayElements(int* const array, int* const size)
{
	for (int i = 0; i < (* size); i++)
	{
		array[i] = rand() % 20;
		(* size)++;
	}
}

void ShowArray(const int* array, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << endl;
	}
}