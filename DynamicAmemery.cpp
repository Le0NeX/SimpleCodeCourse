#include "DynamicAmemery.h"
#include "FileBasic.h"

/* Work with dynamic a memery */

void vRunFunctions()
{
	vCreateDynamicAmemory();
}

void vCreateDynamicAmemory()
{
	int* pnValueOne = new int;
	*pnValueOne = 10;
	cout << "pnValueOne:\t" << pnValueOne << endl;//Output of created a box in memory
	cout << "*pnValueOne:\t" << *pnValueOne << endl;//Output value in memory
	delete pnValueOne;
	pnValueOne = nullptr;//NULL, 0, nulptr ==
	cout << "*pnValueOne:\t" << *pnValueOne << endl;//Output a value of variable after delete
}
//NULL and nullptr
