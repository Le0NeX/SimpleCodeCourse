#include "TypeConversion.h"
#include "FileBasic.h"

void RunTypeConversion()
{
	double number = 33.3;
	int num = number;//Conversion to a narrowing data type
	double numTwo = num;//Converting to an expanding data type
	cout << (int)number << endl;//33
	cout << num << endl;//33
	cout << numTwo << endl;//33
}