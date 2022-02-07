#include "NestedLoop.h"

void NestedLoop()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "I went to loop 1, iteration #: " << i << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "I went to loop 2, iteration #: " << j << endl;
		}
	}
}

void NestedLoopHomeWork(char inputSymbol, int countLine, int countSymbol)
{
	for (int i = 0; i < countLine; i++)
	{
		cout << endl;
		for (int j = 0; j < countSymbol; j++)
		{
			cout << inputSymbol;
		}
	}
	cout << endl; //The finish loop jump to a new line
}